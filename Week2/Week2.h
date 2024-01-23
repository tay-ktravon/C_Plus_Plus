// Week2.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>
using namespace std;

namespace CST8219 {

	class Vehicle {
	private:
		int numWheels;
		int numDoors;

	public:
		Vehicle(int w, int d);
		Vehicle(int w);
		Vehicle();
		~Vehicle();
	};
}
