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

    int getWheels() const;
    void setWheels(int wheels);
    int getDoors() const;
    void setDoors(int doors);

    void printVehicle() const;

    Vehicle& operator=(const Vehicle& other);

    bool operator==(const Vehicle& other) const;
    bool operator!=(const Vehicle& other) const;

    Vehicle& operator++();       // Prefix increment
    Vehicle operator++(int);    // Postfix increment
    Vehicle& operator--();       // Prefix decrement
    Vehicle operator--(int);    // Postfix decrement

    friend std::ostream& operator<<(std::ostream& os, const Vehicle& v);

};
