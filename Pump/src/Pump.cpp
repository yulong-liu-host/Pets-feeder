#include <pigpio.h>
#include "Pump.h"
#include <iostream>
using namespace std;

void Pump::pumpOn(int pin)
{
    gpioWrite(pin,1);
    cout << "pump power On" << endl;
    return 0;
}

void Pump::pumpOn(int pin)
{
    gpioWrite(pin,0);
    cout << "pumo power Off" << endl;
    return 0;
}