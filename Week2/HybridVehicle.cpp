
#include "HybridVehicle.h"
#include <iostream>

void HybridVehicle::drive(float km) {
    // First, try to drive using electric charge
    float kmCanDriveElectric = electricPart.calculateRange();
    if (km <= kmCanDriveElectric) {
        electricPart.drive(km); // If the trip can be completed on electric power alone
        return;
    }
    else {
        electricPart.drive(kmCanDriveElectric); // Use all electric charge first
    }

    // Calculate remaining distance after using electric charge
    float remainingKm = km - kmCanDriveElectric;
    gasolinePart.drive(remainingKm); // Use gasoline for the rest of the trip

    if (remainingKm > gasolinePart.calculateRange()) {
        std::cout << "Your hybrid car is out of energy!" << std::endl;
    }
}