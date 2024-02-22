
// ElectricVehicle.h : Include file for standard system include files,
// or project specific include files.
#pragma once
#include "Vehicle.h"
#include <iostream>

class ElectricVehicle : public Vehicle {
public:
    float currentCharge;
    float maximumCharge;

    ElectricVehicle(float currentCharge, float maximumCharge);//changed this float maxCharge, float efficiency

    virtual ~ElectricVehicle();
    float calculateRange() override;
    float percentEnergyRemaining() override;
    void drive(float km) override;
    
};