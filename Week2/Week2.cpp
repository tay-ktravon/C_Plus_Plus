
// Week2.cpp : Include file for standard system include files,
// or project specific include files.

#include "Vehicle.h"
#include "ElectricVehicle.h"
#include "HybridVehicle.h"
#include "GasolineVehicle.h"

/*
    Vehicle::Vehicle(int w, int d) : numWheels(w), numDoors(d) {
        cout << "In constructor with 2 parameters" << endl;
    }

    Vehicle::Vehicle(int w) : Vehicle(w, 4) {
        cout << "In constructor with 1 parameter, wheels=" << w << endl;
    }

    Vehicle::Vehicle() : Vehicle(4) {
        cout << "In Constructor with 0 parameters" << endl;
    }
    void Vehicle::printVehicle() const {
        std::cout << "Wheels:" << numWheels << " Doors:" << numDoors << std::endl;
    }
/**
    Vehicle::~Vehicle() {
        cout << "In destructor" << endl;
    }
*/
