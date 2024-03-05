
#include "GasolineVehicle.h"
#include <iostream>

void GasolineVehicle::drive(float km) {
    float requiredFuel = (km / 100) * engineEfficiency;
    currentGasoline -= requiredFuel;
    if (currentGasoline < 0) {
        std::cout << "Your car is out of gasoline!" << std::endl;
        currentGasoline = 0; // Prevent negative fuel levels
    }
}