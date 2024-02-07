// Week2.cpp : Include file for standard system include files,
// or project specific include files.

#include "Vehicle.h"

Vehicle::Vehicle() : wheels(0), doors(0) {}

void Vehicle::printVehicle(){ 
    std::cout << "Wheels:" << wheels << " Doors:" << doors << std::endl; 
}

// Constructors
Vehicle::Vehicle(int wheels, int doors) : wheels(wheels), doors(doors) {}
Vehicle::Vehicle(Vehicle& copy) : wheels(copy.wheels), doors(copy.doors) {}
Vehicle::Vehicle(Vehicle* copy) : Vehicle(*copy) {}

void CreateVehicle(Vehicle& v, int w = 4, int d = 2);

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

int main(int argc, char **argv) {

    Vehicle original;                // empty constructor no ( )

    Vehicle copy(original);          // copy constructor by reference

    Vehicle secondCopy(&original);   // copy constructor by pointer
    copy.printVehicle();
    CreateVehicle(copy, 2);          // wheels is 2, everything else is default value
    copy.printVehicle();
    CreateVehicle(copy, 2, 3);       // wheels is 2, doors is 3
    copy.printVehicle();
    copy = secondCopy;
    copy.printVehicle();              // copy is the same as second copy
    return 0;
}


