/*
 * RadioInterceptor.cpp
 *
 *  Created on: Sep 27, 2016
 *      Author: banerjees
 */

#include <RadioInterceptor.h>

RadioInterceptor::RadioInterceptor() {

}

RadioInterceptor::~RadioInterceptor() {
}

Fptr RadioInterceptor::getInterruptHandler() {
	int x = 0;
	int kk = 1;
	auto f = []() -> void {
		RadioPacket *testData = new RadioPacket();
		RadioEvent *re = new RadioEvent(testData);
		Element<RadioEvent> *testElm = new Element<RadioEvent>(re);

		/* Can not access member variables anonymously!!!
		 * //chQ->enqueue(testElm);
		 *
		 * Can not access variable outside the scope (i.e.
		 * not captured as args)
		 * x++;
		 */

	};
	return f;
}

void RadioInterceptor::setup() {

	pinMode(SCK, OUTPUT); //clock
	pinMode(MOSI, OUTPUT); //data to slaves
	pinMode(MISO, OUTPUT); //data to uC

	Serial.println("Nrf24L01 Starting...");

	radio->begin();
	radio->setPayloadSize(32);
	radio->setDataRate(RF24_1MBPS);
	radio->setCRCLength(RF24_CRC_16);
	radio->setAutoAck(true);

	radio->openReadingPipe(1, this->pipeA0);
	//radio->enableDynamicPayloads();
	//radio->enableAckPayload();
	radio->printDetails();
	radio->startListening();

	delay(2000);
}

void RadioInterceptor::loop() {
	//delay(20);

	// TODO dequeue and read
	/*
	 * 1. if there is event in the queue, stop listening
	 * 2. dequeue events. For each dequeued event, do
	 * 3.     interpret the radio/cmd/sts packets
	 * 4.
	 */
	if(dataReceived)
	{
		Serial.println("NRF Data received...");
		dataReceived = false;
		Serial.print("Radio Event Size: ");
		Serial.println(this->chQ->size());

		Element<RadioEvent>* evt = this->chQ->dequeue();
		Serial.print("Radio Event: ");
		Serial.println(evt->data->toString());

	}

}

void RadioInterceptor::indicateInterrupt() {
	digitalWrite(this->interruptIndicator, HIGH);
	for (int j = 0; j < 300; j++)
		delayMicroseconds(333);
	digitalWrite(this->interruptIndicator, LOW);
	for (int j = 0; j < 300; j++)
		delayMicroseconds(333);
	digitalWrite(this->interruptIndicator, HIGH);
	for (int j = 0; j < 300; j++)
		delayMicroseconds(333);
	digitalWrite(this->interruptIndicator, LOW);
}

void RadioInterceptor::interrupt() {
	indicateInterrupt();
	if (radio->available()) {
		bool done = false;
		while (!done) {
			// Fetch the data payload
			dataReceived = true;
			RadioPacket *testData = new RadioPacket();
			done = radio->read(testData, sizeof (*testData));
			RadioEvent *re = new RadioEvent(testData);
			Element<RadioEvent> *testElm = new Element<RadioEvent>(re);
			this->chQ->enqueue(testElm);
		}
	} else {
		Serial.print("No Signal Sent! Last value: ");
	}

}

void RadioInterceptor::setInterruptIndicator(uint8_t pin) {
	// pin must not be one of 9, 10, 11, 12 ,13 used in SPI

	if(9 <= pin <=13)
		//throw "";
		return;

	pinMode(pin, OUTPUT);
	digitalWrite(pin, LOW);
	this->interruptIndicator = pin;
}
