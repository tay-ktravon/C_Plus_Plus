// Vehicle.cpp : Include file for standard system include files,
// or project specific include files.

#include <iostream>
#include "Vehicle.h"
using namespace std;

Vehicle::Vehicle() : wheels(0), doors(0) {}

void Vehicle::printVehicle() const {
    std::cout << "Wheels:" << wheels << " Doors:" << doors << std::endl;
}

Vehicle::Vehicle(Vehicle& copy) : wheels(copy.wheels), doors(copy.doors) {}
Vehicle::Vehicle(Vehicle* copy) : Vehicle(*copy) {}

int Vehicle::getWheels() const {
    return wheels;
}

void Vehicle::setWheels(int wheels) {
    this->wheels = wheels;
}

int Vehicle::getDoors() const {
    return doors;
}

void Vehicle::setDoors(int doors) {
    this->doors = doors;
}

void CreateVehicle(Vehicle& v, int w, int d) {
    v.setWheels(w);
    v.setDoors(d);
}

Vehicle& Vehicle::operator=(const Vehicle& other) {
    if (this != &other) {
        wheels = other.wheels;
        doors = other.doors;
    }
    return *this;
}

bool Vehicle::operator==(const Vehicle& other) const {
    return (wheels == other.wheels) && (doors == other.doors);
}

bool Vehicle::operator!=(const Vehicle& other) const {
    return !(*this == other);
}

Vehicle& Vehicle::operator++() {
    ++wheels;
    ++doors;
    return *this;
}

Vehicle Vehicle::operator++(int) {
    Vehicle temp(*this);
    ++(*this);
    return temp;
}

Vehicle& Vehicle::operator--() {
    --wheels;
    --doors;
    return *this;
}

Vehicle Vehicle::operator--(int) {
    Vehicle temp(*this);
    --(*this);
    return temp;
}

std::ostream& operator<<(std::ostream& os, const Vehicle& v) {
    os << "Wheels: " << v.wheels << " Doors: " << v.doors;
    return os;
}