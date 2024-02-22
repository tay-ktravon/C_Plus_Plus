
#pragma once
#include "Vehicle.h"
#include <iostream>

class GasolineVehicle : public Vehicle {

public:
    float currentGasoline;
    float maximumGasoline;

    GasolineVehicle(float currentGasoline, float maximumGasoline);// changed this float maxGasoline, float efficiency

    virtual ~GasolineVehicle();
    float calculateRange() override;
    float percentEnergyRemaining() override;
    void drive(float km) override;
};
