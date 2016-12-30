/*
 * DeviceManager.cpp
 *
 *  Created on: Oct 6, 2016
 *      Author: banerjees
 */

#include <DeviceManager.h>

DeviceManager::DeviceManager() {
	// TODO Auto-generated constructor stub

}

DeviceManager::~DeviceManager() {
	// TODO Auto-generated destructor stub
}

void DeviceManager::interrupt() {
	// TODO write the code to detect and toggle the switch
}

void DeviceManager::setup() {
}

/**
 * Obsolete, please remove it
 * The device manager will either
 * 1. receive interrupt and thereby doing a callback on device-state-change listeners, OR,
 * 2. receive direct call to update the device status from its callers/clients.
 * Thus no regular looping needed.
 */
void DeviceManager::loop() {
}
