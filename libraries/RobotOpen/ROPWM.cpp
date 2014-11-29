
#include "RobotOpen.h"

/* Constructor */
ROPWM::ROPWM(uint8_t channel)
{
    _channel = channel < 12 ? channel : 11;
}

void ROPWM::write(byte pwmVal) {
	RobotOpen.writePWM(_channel, pwmVal < 255 ? pwmVal : 254);
}

void ROPWM::attach() {
	RobotOpen.attachPWM(_channel);
}

void ROPWM::detach() {
	RobotOpen.detachPWM(_channel);
}