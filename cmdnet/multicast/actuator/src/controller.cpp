#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>
#include <RF24_config.h>
#include <controller.h>
#include <RadioInterceptor.h>
#include <DeviceManager.h>
#include <SerialInterpretter.h>


//Verbosity
#define VERBOSE false

// LED Indicators
#define LED_DEFAULT 8

// Radio Module
RadioInterceptor *radioInterceptor = new RadioInterceptor();

//Radio Interpretter
RadioInterpretter *radioInterpretter = new RadioInterpretter(radioInterceptor);

// Device Manager Module
DeviceManager *deviceManager = new DeviceManager();

// SerialInterpretter (RxTx communication)
SerialInterpretter *serialInterpretter = new SerialInterpretter();

void indicateStartup() {
	pinMode(LED_DEFAULT, OUTPUT);
	Serial.println("Starting Actuator MAIN...");
	delay(2000);
	digitalWrite(LED_DEFAULT, HIGH);
	delay(500);
	digitalWrite(LED_DEFAULT, LOW);
	delay(500);
	digitalWrite(LED_DEFAULT, HIGH);
	delay(500);
	digitalWrite(LED_DEFAULT, LOW);
	delay(500);
	digitalWrite(LED_DEFAULT, HIGH);
	delay(500);
	digitalWrite(LED_DEFAULT, LOW);
	delay(500);
}

void setup()
{
	Serial.begin(57600);
	delay(200);

	/*
	 * All modules setup
	 */
	indicateStartup();
	radioInterceptor->setInterruptIndicator(6);
	radioInterceptor->setup();
	radioInterpretter->setup();
	deviceManager->setup();

	// Does not work, due to C++ restrictions on type  system being able
	// to cast a scoped function-point to a non scoped one!
    //attachInterrupt(0, radioInterceptor->getInterruptHandler(), FALLING);

	/*
	 * All Modules Interrupts Service Routines
	 */
	attachInterrupt(0, interruptRadio, FALLING);
	attachInterrupt(1, interruptDeviceMgr, HIGH);
}

void interruptDeviceMgr()
{
	deviceManager->interrupt();
}

void interruptRadio()
{
	radioInterceptor->interrupt();
}

void testReadSerialCmd() {
	String inputString = "";
	while (Serial.available() > 0)
		inputString += Serial.read();

	if (inputString.startsWith("CMD ")) {
		Serial.print("[ACTUATOR] S-CMD: ");
		Serial.println(inputString.substring(4));
	}
}

void loop() {
	testReadSerialCmd();

	/*
	 * All module loop
	 */
	radioInterceptor->loop();
	deviceManager->loop();

//	/*
//	 * Temporary: a test delay to test the SerialEvent
//	 * (i.e. serial read).
//	 * FIXME remove this
//	 */
//	Serial.println("[Actuator] Delaying 3 secs...");
//	delay(3000);
//	Serial.println("[Actuator] Delaying 3 secs COMPLETED.");

}

int main(void) {
	init();
	setup();
	while (true)
		loop();
	Serial.println("======== EXIT!!! ========");
}
