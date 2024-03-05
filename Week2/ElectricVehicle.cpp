
// ElectricVehicle.cpp : Include file for standard system include files,
// or project specific include files.

#include "ElectricVehicle.h"
#include <iostream>

void ElectricVehicle::drive(float km) {
    float requiredCharge = (km / 100) * engineEfficiency;
    currentCharge -= requiredCharge;
    if (currentCharge < 0) {
        std::cout << "Your car is out of charge!" << std::endl;
        currentCharge = 0; // Prevent negative charge levels
    }
}