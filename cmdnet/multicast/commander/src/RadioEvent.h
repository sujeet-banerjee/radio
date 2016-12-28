/*
 * RadioEvent.h
 *
 *  Created on: Oct 5, 2016
 *      Author: banerjees
 */

#ifndef SRC_RADIOEVENT_H_
#define SRC_RADIOEVENT_H_

#include <Arduino.h>
#include <string.h>

#define RADIO_DATA_SIZE 32

#define lowNibble(B) ((uint8_t) ((B) & 0x0f))
#define highNibble(B) ((uint8_t) ((B) >> 4))

#define isCMD(w) ( (bool) ( (w) & (1u<<15) ))
#define isSTS(w) (!isCMD(w))

#define isREQ(w) ((bool)((w) & (1u<<14)))
#define isACK(w) (!isREQ(w))

#define isACKWAIT(w) ((bool)((w) & (1u<<13)))

/*
 * location => counted in bit-positions, from right, with LSB as 1
 */
void setByteAtLocation(uint64_t* destPtr, byte src, byte location);
byte getByteAtLocation(uint64_t* wordPtr, byte location);
byte getByteAtLocationConst(const uint64_t* wordPtr, byte location);

/**
 * Set/Get a byte, in an 8-byte-long Word.
 * B8 ==> most significant
 * B1 ==> least significant
 */
#define setWordByteB8(w,b)  (setByteAtLocation((w), (b), 56))
#define getWordByteB8(w)    ((byte)getByteAtLocation((w), 56))
#define setWordByteB7(w,b)  (setByteAtLocation((w), (b), 48))
#define getWordByteB7(w)    ((byte)getByteAtLocation((w), 48))
#define setWordByteB6(w,b)  (setByteAtLocation((w), (b), 40))
#define getWordByteB6(w)    ((byte)getByteAtLocation((w), 40))
#define setWordByteB5(w,b)  (setByteAtLocation((w), (b), 32))
#define getWordByteB5(w)    ((byte)getByteAtLocation((w), 32))
#define setWordByteB4(w,b)  (setByteAtLocation((w), (b), 24))
#define getWordByteB4(w)    ((byte)getByteAtLocation((w), 24))
#define setWordByteB3(w,b)  (setByteAtLocation((w), (b), 16))
#define getWordByteB3(w)    ((byte)getByteAtLocation((w), 16))
#define setWordByteB2(w,b)  (setByteAtLocation((w), (b), 8))
#define getWordByteB2(w)    ((byte)getByteAtLocation((w), 8))
#define setWordByteB1(w,b)  (setByteAtLocation((w), (b), 0))
#define getWordByteB1(w)    ((byte)getByteAtLocation((w), 0))

/*
 * 'const' variations of all getByte** methods.
 * This is needed as in C++ 'const pointer' can not
 * be assigned to a 'pointer' (and vice-versa).
 */
#define getWordByteB8Const(w)    ((byte)getByteAtLocationConst((w), 56))
#define getWordByteB7Const(w)    ((byte)getByteAtLocationConst((w), 48))
#define getWordByteB6Const(w)    ((byte)getByteAtLocationConst((w), 40))
#define getWordByteB5Const(w)    ((byte)getByteAtLocationConst((w), 32))
#define getWordByteB4Const(w)    ((byte)getByteAtLocationConst((w), 24))
#define getWordByteB3Const(w)    ((byte)getByteAtLocationConst((w), 16))
#define getWordByteB2Const(w)    ((byte)getByteAtLocationConst((w), 8))
#define getWordByteB1Const(w)    ((byte)getByteAtLocationConst((w), 0))

/*
 * Command:
 *    first 6 bits (MSB) is command-head
 *    last 10 bit form the opcode.
 */
#define getRadioCmd(w) ((uint16_t)( (((w) << 6) & 0xFFFF)  >>6))

typedef struct {
    byte address[5];

    void fromString(const char *string) {
        memcpy(this, string, sizeof(*this));
    }

    const char * toString() {
        static char newString[sizeof(*this) +1];
        memcpy(&newString, this, sizeof(*this));
        newString[sizeof(*this)] = 0;
        return newString;
    }

    void fromLong(uint64_t *input) {
		memcpy(this, input, sizeof(*this));
    }

    uint64_t toLong() {
    	uint64_t newLong = 0;
        memcpy(&newLong, this, sizeof(*this));
        return newLong;
    }

    String toHexString(){
    	uint64_t longVal = this->toLong();
		String ret = String("");
		ret += String(getWordByteB8(&longVal), HEX);
		ret += String(getWordByteB7(&longVal), HEX);
		ret += String(getWordByteB6(&longVal), HEX);
		ret += String(getWordByteB5(&longVal), HEX);
		ret += String(getWordByteB4(&longVal), HEX);
		ret += String(getWordByteB3(&longVal), HEX);
		ret += String(getWordByteB2(&longVal), HEX);
		ret += String(getWordByteB1(&longVal), HEX);
		return ret;
	}

} RadioPipe;

/*
typedef struct {
    byte id;
    byte data[7];

    void fromLong(uint64_t *input) {
        memcpy(this, input, sizeof(*this));
    }

    uint64_t toLong() {
    	uint32_t newLong;
        memcpy(&newLong, this, sizeof(*this));
        return newLong;
    }

    void dataFromLong(uint64_t *input) {
		memcpy(&(this->data), input, sizeof(this->data));
	}

	uint64_t dataToLong() {
		uint64_t newLong;
		memcpy(&newLong, &(this->data), sizeof(this->data));
		return newLong;
	}

} ComponentData;
*/

typedef struct {
	// 2
    uint16_t head;
    // 1
    byte originatorNode;
    // 5
    RadioPipe replyTo;
    // 8
    uint64_t component;

    // 16
    uint64_t additional1;

    // 16
    uint64_t additional2;

    void setComponentId(byte compId){
		setWordByteB8(&(this->component), compId);
	}

	byte getComponentId(){
		return getWordByteB8(&(this->component));
	}

	void setComponentData(uint64_t *componentData){
		// Clear off lesser significant 7 bytes (right)
		this->component >>= 56;
		this->component <<= 56;
		this->component |= ((*componentData) & 0xffffffffffffffLL);
	}

	uint64_t getComponentData(){
		return ((this->component << 8) >> 8) & 0xffffffffffffffLL;
	}

	String toString(){
		String ret = String("Head:");
		ret += String(this->head, HEX);
		ret += String("|Orig:");
		ret += String(this->originatorNode, HEX);
		ret += String("|Reply-to:");
		RadioPipe replyTo = this->replyTo;
		//ret += String(replyTo.toString());
		ret += replyTo.toHexString();
		ret += String("|Component:");
		ret += String(getWordByteB8(&(this->component)), HEX);
		ret += String(getWordByteB7(&(this->component)), HEX);
		ret += String(getWordByteB6(&(this->component)), HEX);
		ret += String(getWordByteB5(&(this->component)), HEX);
		ret += String(getWordByteB4(&(this->component)), HEX);
		ret += String(getWordByteB3(&(this->component)), HEX);
		ret += String(getWordByteB2(&(this->component)), HEX);
		ret += String(getWordByteB1(&(this->component)), HEX);

		return ret;
	}

//	String toString() {
//		String ret = String("Head:");
//		ret += String(this->head, HEX);
//		ret += String("|Orig:");
//		ret += String(this->originatorNode, HEX);
//		ret += String("|Reply-to:");
//		RadioPipe replyTo = this->replyTo;
//		ret += replyTo.toString();
//		ret += String("|Component:");
//		ret += String(getWordByteB8(&(this->component)), HEX);
//		ret += String(getWordByteB7(&(this->component)), HEX);
//		ret += String(getWordByteB6(&(this->component)), HEX);
//		ret += String(getWordByteB5(&(this->component)), HEX);
//		ret += String(getWordByteB4(&(this->component)), HEX);
//		ret += String(getWordByteB3(&(this->component)), HEX);
//		ret += String(getWordByteB2(&(this->component)), HEX);
//		ret += String(getWordByteB1(&(this->component)), HEX);
//
//		return ret;
//	}

} RadioPacket;


class RadioEvent {
private:
	const RadioPacket *radioPacket ; //size == RADIO_DATA_SIZE;

public:
	RadioEvent (const RadioPacket *radioPacket);
	virtual ~RadioEvent();

	inline uint16_t getRadioHead() {return this->radioPacket->head;}
	inline byte getOriginatorNode()   {return this->radioPacket->originatorNode;}
	inline RadioPipe getReplyToAddress()   {return this->radioPacket->replyTo;}
	inline uint64_t getComponentData()   {return this->radioPacket->component;}

	inline bool isCmd() { return isCMD(this->radioPacket->head); }
	inline bool isSts() {return isSTS(this->radioPacket->head);}
	inline bool isReq() {return isREQ(this->radioPacket->head);}
	inline bool isAck() {return isACK(this->radioPacket->head);}
	inline bool isAckRequested() {return isACKWAIT(this->radioPacket->head);}

	String toString();
};

#endif /* SRC_RADIOEVENT_H_ */
