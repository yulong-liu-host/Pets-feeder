#include <pigpio>
#include <iostream>
#include <vector>

class Pump
{
private:
public:
    void pumpOn(int pin);
    void pumpOff(int pin);
};