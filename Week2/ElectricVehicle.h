
// ElectricVehicle.h : Include file for standard system include files,
// or project specific include files.
#pragma once
#ifndef ELECTRICVEHICLE_H
#define ELECTRICVEHICLE_H
#include"Vehicle.h"
#include<iostream>

class ElectricVehicle : public Vehicle {
protected:
    float currentCharge;
    float maximumCharge;

public:
    ElectricVehicle(float maxCharge, float efficiency) : Vehicle(4, 2, efficiency), currentCharge(maxCharge), maximumCharge(maxCharge) {}

    virtual ~ElectricVehicle() override { std::cout << "In ElectricVehicle Destructor" << std::endl; }

    float calculateRange() override {
        return (currentCharge / engineEfficiency) * 100;
    }

    float percentEnergyRemaining() override {
        return (currentCharge / maximumCharge) * 100.0f;
    }

    void drive(float km) override;
};
#endif