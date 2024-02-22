
#include "GasolineVehicle.h"
#include <iostream>

GasolineVehicle::GasolineVehicle(float currentGasoline, float maximumGasoline)
    : maximumGasoline(maximumGasoline), currentGasoline(maximumGasoline) {
    engineEfficiency = currentGasoline;
}

GasolineVehicle::~GasolineVehicle() {
    std::cout << "In Gasoline Vehicle Destructor" << std::endl;
}

float GasolineVehicle::calculateRange() {
    return (currentGasoline / maximumGasoline) * 100.0f / engineEfficiency;
}

float GasolineVehicle::percentEnergyRemaining() {
    return (currentGasoline / maximumGasoline) * 100.0f;
}

void GasolineVehicle::drive(float km) {
    float energyConsumption = (km / 100) * engineEfficiency;
    currentGasoline -= energyConsumption;
    if (currentGasoline < 0)
        std::cout << "Your car is out of energy!" << std::endl;
}
