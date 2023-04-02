#include <pigpio.h>
#include "Pump.h"
#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

int main()
{
    if (gpioInitialise() < 0)
    {
        cout << "Failed" << endl;
        return 0;
    }
    else
    {
        cout << "PIGPIO is ready" << endl;
    }
    Servo servo1;

    while (1)
    {
        pumpOn(12);
        std::this_thread::sleep_for(std::chrono::milliseconds(5000));
        pumpOff(12);
    }

    return 0;
}