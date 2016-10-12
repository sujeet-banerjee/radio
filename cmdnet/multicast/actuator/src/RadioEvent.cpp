/*
 * RadioEvent.cpp
 *
 *  Created on: Oct 5, 2016
 *      Author: banerjees
 */

#include <RadioEvent.h>

void setByteAtLocation(uint64_t* destPtr, byte src, byte location){
	uint64_t buff = src;
	// Clear off byte
	(*destPtr) &= ~(255 << location);
	// Set Byte
	(*destPtr) |= (buff << location);
}

byte getByteAtLocation(uint64_t* wordPtr, byte location) {
	return ((*wordPtr) >> location) & 0xff;
}

RadioEvent::RadioEvent(const RadioPacket *radioPacket) {
	this->radioPacket = radioPacket;
}

RadioEvent::~RadioEvent() {
}

const String RadioEvent::toString() {
	String ret = String("Head:");
	ret += String(this->radioPacket->head);
	ret += String("|Orig:");
	ret += String(this->radioPacket->originatorNode);
	ret += String("|Reply-to:");
	RadioPipe replyTo = this->radioPacket->replyTo;
//	ret += replyTo.toLong();
	//String(0x7878787878787878LL);
	ret += String("|Component:");
//	ret += String(this->radioPacket->component);
	//ret += String(this->radioPacket->getComponentId());

	return ret;
}
