
#pragma once
#include "GasolineVehicle.h"
#include "ElectricVehicle.h"
#include <iostream>

class HybridVehicle : public GasolineVehicle, public ElectricVehicle {
public:
    HybridVehicle(float currentGasoline, float maximumGasoline, float currentCharge, float maximumCharge);

    virtual ~HybridVehicle();
    float calculateRange() override;
    float percentEnergyRemaining() override;
    void drive(float km) override;
};
