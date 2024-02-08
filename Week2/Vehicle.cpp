// Vehicle.cpp : Include file for standard system include files,
// or project specific include files.

#include <iostream>
#include "Vehicle.h"
using namespace std;

Vehicle::Vehicle() : wheels(0), doors(0) {}

void Vehicle::printVehicle() {
    std::cout << "Wheels:" << wheels << " Doors:" << doors << std::endl;
}

Vehicle::Vehicle(Vehicle& copy) : wheels(copy.wheels), doors(copy.doors) {}
Vehicle::Vehicle(Vehicle* copy) : Vehicle(*copy) {}

int Vehicle::getWheels() {
    return wheels;
}

void Vehicle::setWheels(int wheels) {
    this->wheels = wheels;
}

int Vehicle::getDoors() {
    return doors;
}

void Vehicle::setDoors(int doors) {
    this->doors = doors;
}

void CreateVehicle(Vehicle& v, int w, int d) {
    v.setWheels(w);
    v.setDoors(d);
}