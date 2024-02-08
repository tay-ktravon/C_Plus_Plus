// Vehicle.h : Include file for standard system include files,
// or project specific include files.
#pragma once

#include <iostream>

class Vehicle {
private:
    int wheels;
    int doors;

public:
    Vehicle();

    Vehicle(Vehicle& );
    Vehicle(Vehicle* );

    int getWheels();
    void setWheels(int wheels);
    int getDoors();
    void setDoors(int doors);

    void printVehicle();
};
