// Week2.cpp : Defines the entry point for the application.
//

#include <iostream>
#include "Week2.h"

using namespace std;

namespace CST8219 {

	Vehicle::Vehicle(int w, int d) : numWheels(w), numDoors(d) {
		cout << "In constructor with 2 parameters" << endl;
	}

	Vehicle::Vehicle(int w) : Vehicle(w, 4) {
		cout << "In constructor with 1 parameter, wheels = " << w << endl;
	}

	Vehicle::Vehicle() : Vehicle(4) {
		cout << "In construction with 0 parameters" << endl;
	}

	Vehicle::~Vehicle() {
		cout << "In destructor" << endl;
	}
}

int main(int argc, char** argv)
{
	CST8219::Vehicle myVehicle;
	cout << "I made a Vehicle" << endl;
	return 0;
}