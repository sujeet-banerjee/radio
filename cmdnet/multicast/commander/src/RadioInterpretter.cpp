/*
 * RadioInterpretter.cpp
 *
 *  Created on: Oct 6, 2016
 *      Author: banerjees
 */

#include <RadioInterceptor.h>

RadioInterpretter::RadioInterpretter(RadioInterceptor *radioInterceptor) {
	this->radioInterceptor = radioInterceptor;
	this->radioInterceptor->setRadioInterpretter(this);
}

RadioInterpretter::~RadioInterpretter() {
	// TODO Auto-generated destructor stub
	delete this->radioInterceptor;
}

void RadioInterpretter::setup() {
	// Nothing to be done as of now!
}

/**
 * Should never destruct the input re, else the parent
 * Element holding the evt instance will have a dangling
 * pointer.
 */
void RadioInterpretter::interpret(RadioEvent* re) {
	/*
	 * Never ever do this!
	 *   //delete re;
	 */

	/*
	 * FIXME as a test we are echoing back the event
	 */

	if(re == nullptr){
		Serial.println("[WARNING!!!] null event ptr!!!");
	} else {
//		re->setRadioHead(0x493f);
//		this->writeRadio(re, re->getReplyToAddress());
	}
}

void RadioInterpretter::writeRadio(RadioEvent* re, RadioPipe* pipeAddress) {
	RadioPacket* pkt = re->getRadioPacket();

	// FIXME uncomment this once we fix the radio event queuing only for read-data
//	Serial.print("[Commander][Radio] About to echo pkt: ");
//	Serial.print(pkt->toString());
//	Serial.print(" to: ");
//	Serial.println(pipeAddress->toHexString());
//	this->radioInterceptor->writeRadio(pkt, pipeAddress);
}

void RadioInterpretter::writeRadio(RadioPacket* pkt, RadioPipe* pipeAddress) {
	this->radioInterceptor->writeRadio(pkt, pipeAddress);
}

