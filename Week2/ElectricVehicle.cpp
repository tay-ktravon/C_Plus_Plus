
// ElectricVehicle.cpp : Include file for standard system include files,
// or project specific include files.

#include "ElectricVehicle.h"
#include <iostream>

ElectricVehicle::ElectricVehicle(float maxCharge, float efficiency)
    : maximumCharge(maxCharge), currentCharge(maxCharge) {
    engineEfficiency = efficiency;
}

ElectricVehicle::~ElectricVehicle() {
    std::cout << "In Electric Vehicle Destructor" << std::endl;
}

float ElectricVehicle::calculateRange() {
    return (currentCharge / maximumCharge) * 100.0f / engineEfficiency;
}

float ElectricVehicle::percentEnergyRemaining() {
    return (currentCharge / maximumCharge) * 100.0f;
}

void ElectricVehicle::drive(float km) {
    float energyConsumption = (km / 100) * engineEfficiency;
    currentCharge -= energyConsumption;
    if (currentCharge < 0)
        std::cout << "Your car is out of energy!" << std::endl;
}
