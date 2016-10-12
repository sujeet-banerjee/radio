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

	void loop();
};

#endif /* SRC_DEVICEMANAGER_H_ */
