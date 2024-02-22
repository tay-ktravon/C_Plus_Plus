
// Vehicle.h : Include file for standard system include files,
// or project specific include files.
#pragma once
#include <iostream>

class Vehicle {

public:
    float engineEfficiency;

    virtual ~Vehicle();
    virtual float calculateRange() = 0;
    virtual float percentEnergyRemaining() = 0;
    virtual void drive(float km) = 0;

};
