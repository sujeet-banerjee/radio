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
	//re->setRadioHead(0x493f);
	//this->writeRadio(re, re->getReplyToAddress().toLong());
}

void RadioInterpretter::writeRadio(const RadioEvent* re, const uint64_t pipeAddress) {
	const RadioPacket* pkt = re->getRadioPacket();
	this->radioInterceptor->writeRadio(pkt, pipeAddress);
}

void RadioInterpretter::writeRadio(const RadioPacket* pkt, const uint64_t pipeAddress) {
	this->radioInterceptor->writeRadio(pkt, pipeAddress);
}

