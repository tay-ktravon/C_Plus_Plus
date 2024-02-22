
#pragma once
#include "HybridVehicle.h"
#include "GasolineVehicle.h"
#include "ElectricVehicle.h"

HybridVehicle::HybridVehicle(float maximumGasoline, float currentGasoline, float maximumCharge, float currentCharge)
    : GasolineVehicle(maximumGasoline, currentGasoline), ElectricVehicle(maximumCharge, currentCharge) {}

HybridVehicle::~HybridVehicle() {
    std::cout << "In Hybrid Vehicle Destructor" << std::endl;
}

float HybridVehicle::calculateRange() {
    return (GasolineVehicle::calculateRange() + ElectricVehicle::calculateRange()) / 2.0f;
}

float HybridVehicle::percentEnergyRemaining() {
    return (GasolineVehicle::percentEnergyRemaining() + ElectricVehicle::percentEnergyRemaining()) / 2.0f;
}

void HybridVehicle::drive(float km) {
    if (currentCharge > 0) {
        ElectricVehicle::drive(km);
        std::cout << "Your car is out of energy!" << std::endl;
    }
    else {
        GasolineVehicle::drive(km);
    }
}
