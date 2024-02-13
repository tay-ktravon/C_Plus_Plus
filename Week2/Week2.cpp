// Week2.cpp : Include file for standard system include files,
// or project specific include files.

#include "Vehicle.h"


void CreateVehicle(Vehicle& v, int w=4, int d=2);

int main(int argc, char **argv) 
{
    Vehicle original;
    Vehicle copy(original); // copy constructor by reference
    std::cout << "Original is: " << original << " copy is: " << copy << std::endl;
    std::cout << "Increment original: " << original++ << std::endl;
    std::cout << "Increment copy:" << ++copy << std::endl;
    std::cout << "Decrement original:" << --original << std::endl;
    std::cout << "Decrement copy:" << copy-- << std::endl;

    // should be true :
    std::cout << "Compare equality 1: " << (original == copy) << std::endl;
    
    // should be false:
    std::cout << "Compare equality 2: " << (--original == ++copy) << std::endl;
    
    // should be true:
    std::cout << "Compare inequality: " << (original != copy) << std::endl;
    
    // This should make original = copy, and then return a Vehicle for output:
    std::cout << "Assignment operator: " << (original = copy) << std::endl;
    return 0;
}
