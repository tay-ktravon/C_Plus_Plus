// Vehicle.h : Include file for standard system include files,
// or project specific include files.
#pragma once

#include <iostream>

class Vehicle {
private:
    int wheels;
    int doors;

public:
    // Constructors
    Vehicle() : wheels(0), doors(0) {}
    Vehicle(int wheels, int doors) : wheels(wheels), doors(doors) {}

    // Copy Constructors
    Vehicle(const Vehicle& copy) : Vehicle(copy.wheels, copy.doors) {}
    Vehicle(const Vehicle* copy) : Vehicle(*copy) {}

    // Print function
    void printVehicle() const {
        std::cout << "Wheels: " << wheels << ", Doors: " << doors << std::endl;
    }
};
