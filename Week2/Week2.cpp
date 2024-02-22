
// Week2.cpp : Include file for standard system include files,
// or project specific include files.

#include "Vehicle.h"
#include "ElectricVehicle.h"
#include "HybridVehicle.h"
#include "GasolineVehicle.h"


Vehicle* testVehicle(Vehicle* pVehicle, const char* vehicleName)
{
	std::cout << vehicleName << "’s range is: " << pVehicle->calculateRange() << std::endl;
	pVehicle->drive(150); //drive 150 km
	std::cout << vehicleName << "’s energy left is: " << pVehicle->percentEnergyRemaining() << std::endl;
	std::cout << vehicleName << "’s range is now: " << pVehicle->calculateRange() << std::endl;
	return pVehicle;
}
int main(int argc, char** argv)
{
	//50L of gas, 7.1 L/100km
	delete testVehicle(new GasolineVehicle(50, 7.1), "Corolla");
	//42 L of gas, 4.3 L/100km, 8.8kWh, 22 kWh/100km
	delete testVehicle(new HybridVehicle(42, 4.3, 8.8, 22.0), "Prius");
	//75 kWh, 16 kWh/100km
	delete testVehicle(new ElectricVehicle(75, 16), "Tesla 3");
	return 0;
}
