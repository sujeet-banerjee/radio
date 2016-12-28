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

byte getByteAtLocationConst(const uint64_t* wordPtr, byte location) {
	return ((*wordPtr) >> location) & 0xff;
}

RadioEvent::RadioEvent(const RadioPacket *radioPacket) {
	this->radioPacket = radioPacket;
}

RadioEvent::~RadioEvent() {
	delete this->radioPacket;
}

String RadioEvent::toString() {
	String ret = String("Head:");
	ret += String(this->radioPacket->head, HEX);
	ret += String("|Orig:");
	ret += String(this->radioPacket->originatorNode, HEX);
	ret += String("|Reply-to:");
	RadioPipe replyTo = this->radioPacket->replyTo;
	ret += replyTo.toHexString();
	ret += String("|Component:");

	ret += String(getWordByteB8Const(&(this->radioPacket->component)), HEX);
	ret += String(getWordByteB7Const(&(this->radioPacket->component)), HEX);
	ret += String(getWordByteB6Const(&(this->radioPacket->component)), HEX);
	ret += String(getWordByteB5Const(&(this->radioPacket->component)), HEX);
	ret += String(getWordByteB4Const(&(this->radioPacket->component)), HEX);
	ret += String(getWordByteB3Const(&(this->radioPacket->component)), HEX);
	ret += String(getWordByteB2Const(&(this->radioPacket->component)), HEX);
	ret += String(getWordByteB1Const(&(this->radioPacket->component)), HEX);


	return ret;
}
