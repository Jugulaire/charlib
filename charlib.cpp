/*
Arduino lib for charliplexed matrix of led
*/

#include "charlib.h"


charlib::charlib(byte* userPins,byte numberOfUserPins){
	pins = userPins;
	numberOfPins = numberOfUserPins;
	kill();
}

void charlib::write(charliePin pin, bool state){
	if(state){
		setVcc(pin.vcc);
		setGnd(pin.gnd);
	}else{
		pinMode(pin.vcc,INPUT);
	}
}

//set a pin HIGH 
void charlib::setVcc(byte pin){
	pinMode( pins[pin] , OUTPUT );
	digitalWrite( pins[pin] , HIGH );
}

//set a pin LOW 
void charlib::setGnd(byte pin){
	pinMode( pins[pin] , OUTPUT );
	digitalWrite( pins[pin] , LOW );
}

//set all as input
void charlib::kill(){
	for (byte i=0; i<numberOfPins; i++){
        digitalWrite( i , LOW );
        pinMode( pins[i] , INPUT);
	}
}
