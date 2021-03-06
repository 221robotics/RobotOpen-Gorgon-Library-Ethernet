#include "RobotOpenGE.h"

/* Constructor */
RODigitalIO::RODigitalIO(uint8_t channel, uint8_t mode)
{
    _channel = channel;
    setMode(mode);
}

void RODigitalIO::on() {
	digitalWrite(_channel, HIGH);
}

void RODigitalIO::off() {
	digitalWrite(_channel, LOW);
}

boolean RODigitalIO::read() {
	return ((digitalRead(_channel) == HIGH) ? true : false);
}

void RODigitalIO::pullUp() {
	pinMode(_channel, INPUT_PULLUP);
}

void RODigitalIO::allowFloat() {
	pinMode(_channel, INPUT);
}

void RODigitalIO::setMode(uint8_t mode) {
	pinMode(_channel, mode);
}