
#pragma once

#ifndef GASOLINEVEHICLE_H
#define GASOLINEVEHICLE_H
#include"Vehicle.h"
#include<iostream>
class GasolineVehicle : public Vehicle {
protected:
    float currentGasoline;
    float maximumGasoline;

public:
    GasolineVehicle(float maxGasoline, float efficiency) : Vehicle(4, 2, efficiency), currentGasoline(maxGasoline), maximumGasoline(maxGasoline) {}

    virtual ~GasolineVehicle() override { std::cout << "In GasolineVehicle Destructor" << std::endl; }

    float calculateRange() override {
        return (currentGasoline / engineEfficiency) * 100;
    }

    float percentEnergyRemaining() override {
        return (currentGasoline / maximumGasoline) * 100.0f;
    }

    void drive(float km) override;
};
#endif