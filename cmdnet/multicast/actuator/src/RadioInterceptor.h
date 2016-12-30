/*
 * RadioInterceptor.h
 *
 *  Created on: Sep 27, 2016
 *      Author: banerjees
 */

#ifndef SRC_RADIOINTERCEPTOR_H_
#define SRC_RADIOINTERCEPTOR_H_

#include <nRF24L01.h>
#include <RF24.h>
#include <RF24_config.h>
#include <Queue.h>
#include <RadioEvent.h>
#include <pins_arduino.h>

// Radio Pins
#define CE_PIN   9
#define CSN_PIN 10

#define SCK 13
#define MISO 12
#define MOSI 11

#define RF_INTX 2
#define DEBUG_LED 5

typedef void (*Fptr)();

class RadioInterceptor;
class RadioInterpretter;

/**
 * Higher level business logic over Radio
 */
class RadioInterpretter {
private:
	RadioInterceptor *radioInterceptor;

public:
	RadioInterpretter(RadioInterceptor *radioInterceptor);
	virtual ~RadioInterpretter();

	void setup();

	/**
	 * Interprets the cmd and takes action synchronously!
	 */
	void interpret(RadioEvent* re);

	void writeRadio(const RadioEvent* re, const uint64_t pipeAddress);

	void writeRadio(const RadioPacket* pkt, const uint64_t pipeAddress);
};

/**
 * Encapsulates low-level Radio communication, pipe-management, and as a hook from the
 * AVR 'main' function.
 * 1. Boot and associate with a public pipe-address
 * 2. //Pick-up the list of addresses and broadcast to all the addresses, that it has come up.
 * 3. Attach interrupt (will be done externally by the owner)
 * 4. Go to listen-mode (setup will be called externally)
 * 5. loop (for processing any command/event).
 *
 * Set of addresses:
 *  0x3A3A3A3AD2LL
 *  0xF0E9F0F0D2LL
 *  0xE8E8F0F0E1LL
 *  0xB3B4B5B6F1LL
 */
class RadioInterceptor {

private:
	const uint64_t pipeA0 = 0xE8E8F0F0E1LL;
	uint64_t pipeN0 = 0xF0E9F0F0D2LL;

	/*
	 * Create a Radio
	 * TODO parameterize CE_PIN, CSN_PIN
	 */
	RF24Debug *radio = new RF24Debug(CE_PIN, CSN_PIN);

	Queue<RadioEvent> *chQ = new Queue<RadioEvent>(30);

	/**
	 * Owner
	 */
	RadioInterpretter *radioInterpretter ;//= new RadioInterpretter(this);

	/**
	 * temp datamember for debugging
	 */
	bool dataReceived = false;

	/**
	 * temporary for testing and debugging
	 */
	unsigned short waitCountBeforeSend = 0;
	/**
	 * temporary origId for testing
	 */
	byte testOrigId = 0x32;

	/*
	 * Indicators...
	 */
	uint8_t interruptIndicator;

	void indicateInterrupt();

	void indicateNoRadioData();

	void sendTestMsgToCommander();

	/**
	 * Enhancement of sendTestMsgToCommander
	 * TODO obtain originator Id
	 */
	void initiateRegistration(byte origId);

public:
	RadioInterceptor();
	virtual ~RadioInterceptor();

	Fptr getInterruptHandler();

	void interrupt();

	void writeRadio(const RadioPacket *pkt, const uint64_t pipeAddress);

	void setup();

	void loop();

	void setInterruptIndicator(uint8_t pin);

	const RadioInterpretter* getRadioInterpretter() const {
		return radioInterpretter;
	}

	void setRadioInterpretter(RadioInterpretter * radioInterpretter) {
		this->radioInterpretter = radioInterpretter;
	}
};


#endif /* SRC_RADIOINTERCEPTOR_H_ */

