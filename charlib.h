/*
	Arduino lib for charliplexed led matrix
*/

#ifndef CHARLIEPLEX_H
#define CHARLIEPLEX_H

#include <Arduino.h>

struct CharliePin {
	byte vcc;
	byte gnd;
};

typedef CharliePin charliePin;

class charlib {

#define INDEX 1
#define NUMBER_OF_STATUSES ((_numberOfPins*_numberOfPins)-_numberOfPins)

public:
	charlib(byte* userPins,byte numberOfUserPins);
	
	void write(charliePin pin,bool state);
	
	void setVcc(byte pin);
	void setGnd(byte pin);
	
	void kill();
	
private:
	byte numberOfPins;
	byte* pins;
};

#endif

