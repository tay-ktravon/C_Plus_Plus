
#pragma once
#ifndef HYBRIDVEHICLE_H
#define HYBRIDVEHICLE_H
#include "ElectricVehicle.h"
#include "GasolineVehicle.h"
#include<iostream>

class HybridVehicle : public Vehicle {
private:
    ElectricVehicle electricPart;
    GasolineVehicle gasolinePart;

public:
    HybridVehicle(float maxGasoline, float gasolineEfficiency, float maxCharge, float electricEfficiency)
        : Vehicle(4, 2, (gasolineEfficiency + electricEfficiency) / 2), // Simplified representation
        electricPart(maxCharge, electricEfficiency),
        gasolinePart(maxGasoline, gasolineEfficiency) {}

    virtual ~HybridVehicle() override { std::cout << "In HybridVehicle Destructor" << std::endl; }

    float calculateRange() override {
        // Simplified calculation: sum of both ranges
        return electricPart.calculateRange() + gasolinePart.calculateRange();
    }

    float percentEnergyRemaining() override {
        // Average of both energy percentages
        return (electricPart.percentEnergyRemaining() + gasolinePart.percentEnergyRemaining()) / 2.0f;
    }

    void drive(float km) override;
};
#endif
