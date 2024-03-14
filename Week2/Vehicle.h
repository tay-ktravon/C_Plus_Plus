
// Vehicle.h : Include file for standard system include files,
// or project specific include files.
#pragma once
#ifndef VEHICLE_H
#define VEHICLE_H
#include<iostream>

class Vehicle {
protected:
    int numWheels;
    int numDoors;
    float engineEfficiency;
public:
    // Virtual destructor for proper cleanup of derived classes
    virtual ~Vehicle() { std::cout << "In Vehicle Destructor" << std::endl; }

    // Constructor
    Vehicle(int w = 4, int d = 2, float e = 0.0f) : numWheels(w), numDoors(d), engineEfficiency(e) {}

    // Pure virtual functions
    virtual float calculateRange() = 0;
    virtual float percentEnergyRemaining() = 0;
    virtual void drive(float km) = 0;

    Vehicle(Vehicle&);
    Vehicle(Vehicle*);
    // ~Vehicle();
    void setNumWheels(int w);
    void setNumDoors(int d);

};

void CreateVehicle(Vehicle& v, int w = 4, int d = 2);
#endif 