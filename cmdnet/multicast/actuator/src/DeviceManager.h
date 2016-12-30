/*
 * DeviceManager.h
 *
 *  Created on: Oct 6, 2016
 *      Author: banerjees
 */

#ifndef SRC_DEVICEMANAGER_H_
#define SRC_DEVICEMANAGER_H_

class DeviceManager {
public:
	DeviceManager();
	virtual ~DeviceManager();

	void interrupt();

	void setup();

	/**
	 * Obsolete, please remove it
	 * The device manager will either
	 * 1. receive interrupt and thereby doing a callback on device-state-change listeners, OR,
	 * 2. receive direct call to update the device status from its callers/clients.
	 * Thus no regular looping needed.
	 */
	void loop();
};

#endif /* SRC_DEVICEMANAGER_H_ */
