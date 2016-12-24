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
	Serial.println("Actuator Nrf24L01 Starting...");
	pinMode(SCK, OUTPUT); //clock
	pinMode(MOSI, OUTPUT); //data to slaves
	pinMode(MISO, OUTPUT); //data to uC

	// No data indicator - being used as sent-test-data indicator
	pinMode(7, OUTPUT);

	pinMode(this->interruptIndicator, OUTPUT);

	radio->begin();
	radio->setPayloadSize(32);
	radio->setDataRate(RF24_1MBPS);
	radio->setCRCLength(RF24_CRC_16);
	radio->setAutoAck(false);

	radio->openWritingPipe(this->pipeA0);
	radio->openReadingPipe(0, this->pipeN0);
	radio->printDetails();
	radio->startListening();

	delay(2000);
}

void RadioInterceptor::loop() {
	//delay(2);
//	Serial.print("== LOOP ==: ");
//	Serial.println(waitCountBeforeSend);

	// FIXME I am incorrectly/temporarily using this to indicate loop
	this->indicateInterrupt();

	// TODO dequeue and read
	/*
	 * 1. if there is event in the queue, stop listening
	 * 2. dequeue events. For each dequeued event, do
	 * 3.     interpret the radio/cmd/sts packets
	 * 4.
	 */
//	if(dataReceived)
//	{
//		Serial.println("NRF Data received...");
//		dataReceived = false;
//		Serial.print("Radio Event Size: ");
//		Serial.println(this->chQ->size());
//
//		Element<RadioEvent>* evt = this->chQ->dequeue();
//		Serial.print("Radio Event: ");
//		Serial.println(evt->data->toString());
//
//	}

	waitCountBeforeSend++;
	if(waitCountBeforeSend == 40)
	{
		/*
		 * FIXME for now, using no-data indicator to
		 * indicate test-data being sent
		 */
		this->indicateNoRadioData();

		this->sendTestMsgToCommander();
		waitCountBeforeSend = 0;
	}

}

/**
 * FIXME I am using this as a loop-indicator temporarily.
 *
 * So I am not commenting-out the code lines for dual-blink.
 * This is temporarily just a single blink.
 */
void RadioInterceptor::indicateInterrupt() {
	digitalWrite(this->interruptIndicator, HIGH);
	for (int j = 0; j < 300; j++)
		delayMicroseconds(333);
	digitalWrite(this->interruptIndicator, LOW);
//	for (int j = 0; j < 200; j++)
//		delayMicroseconds(333);
//	digitalWrite(this->interruptIndicator, HIGH);
//	for (int j = 0; j < 300; j++)
//		delayMicroseconds(333);
//	digitalWrite(this->interruptIndicator, LOW);
}

void RadioInterceptor::indicateNoRadioData() {
	digitalWrite(7, HIGH);
	for (int j = 0; j < 300; j++)
		delayMicroseconds(333);
	digitalWrite(7, LOW);
	for (int j = 0; j < 300; j++)
		delayMicroseconds(333);
}

void RadioInterceptor::interrupt() {

	/*
	 * Note: Just when we send test-data (and not
	 * listen for anything), there would be no
	 * interrupt.
	 *
	 * I am motivated to reuse (incorrectly)
	 * to use interrupt-indicator as loop indicator
	 *
	 * FIXME uncomment when this is listening for actual data.
	 */
	//this->indicateInterrupt();



//	if (radio->available()) {
//		bool done = false;
//		while (!done) {
//			// Fetch the data payload
//			dataReceived = true;
//			RadioPacket *testData = new RadioPacket();
//			done = radio->read(testData, sizeof (*testData));
//			RadioEvent *re = new RadioEvent(testData);
//			Element<RadioEvent> *testElm = new Element<RadioEvent>(re);
//			this->chQ->enqueue(testElm);
//		}
//	} else {
//		//Serial.print(".");
//		this->indicateNoRadioData();
//	}

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

void RadioInterceptor::sendTestMsgToCommander() {
	this->radio->openWritingPipe(this->pipeA0);
	this->radio->stopListening();
	delay(20);

	RadioPacket *testData = new RadioPacket();
	testData->originatorNode = 0x32;
	testData->head = 0x493d;
	testData->replyTo.fromString("Nod!@");
	testData->component = 0x123456789abcef3dLL;
	testData->setComponentId(0x00);
	Serial.print("[Actuator] Sending Test Packet to the commander: ");
    Serial.println(testData->toString());
    Serial.print("[Actuator] Test Packet size: ");
    Serial.println(sizeof(*testData));
	this->radio->write(testData, sizeof(*testData));
	delay(20);
	delete testData;

	this->radio->startListening();
	delay(20);
}
