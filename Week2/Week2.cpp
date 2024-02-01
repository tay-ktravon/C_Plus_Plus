#include<iostream>
using namespace std;


class Vehicle {

    private:
        int numWheels;
        int numDoors;
    public:
        Vehicle(int w, int d) {
            numWheels = w;
            numDoors = d;
            cout << "In constructor with 2 parameters" << endl;
        };
        Vehicle(int w) : Vehicle(w, 4) {
            cout << "In constructor with 1 parameters, wheels=" << w << endl;
        };
        Vehicle() : Vehicle(4) {
            cout << "In Constructor with 0 parameters " << endl;
        };
        ~Vehicle() {
            cout << "In destructor" << endl;
        };
    };
int main(int argc, char** argv) {
    // Create a new variable
    Vehicle veh1; // This calls constructor Vehicle()
    Vehicle veh2(4); //This calls constructor Vehicle(int);
    Vehicle veh3(4, 2); //This calls constructor Vehicle( int, int);
    cout << "Vehicle takes " << sizeof(veh1) << endl;
    cout << "Vehicle takes " << sizeof(veh2) << endl;
    cout << "Vehicle takes " << sizeof(veh2) << endl;
    Vehicle* pVehicle = nullptr;

    char choice;
    do {
        // Ask the user if they want to create a new vehicle or quit
        cout << "Do you want to create a new vehicle? (y for yes, q for quit): ";
        cin >> choice;

        if (choice == 'q') {
            break;
        }
        else if (choice == 'y') {
            // Delete the memory allocated for the previous object (if any)
            if (pVehicle != nullptr) {
                delete pVehicle;
            }

            // Ask the user to input the doors and wheels to create a new Vehicle
            int d, w;
            do {
                cout << "Enter number of doors: ";
                cin >> d;

                // Check for invalid input (non-integer)
                if (cin.fail()) {
                    cin.clear(); // Clear the error flag
                    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
                    cout << "Invalid input. Please enter a valid integer." << endl;
                    continue;
                }

                cout << "Enter number of wheels: ";
                cin >> w;

                // Check for invalid input (non-integer)
                if (cin.fail()) {
                    cin.clear(); // Clear the error flag
                    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
                    cout << "Invalid input. Please enter a valid integer." << endl;
                    continue;
                }

                // Validate the input
                if (d >= 0 && w > 0) {
                    break;
                }
                else {
                    cout << "Invalid input. Please enter valid numbers." << endl;
                }
            } while (true);

            // Create the object using the new keyword
            pVehicle = new Vehicle(w, d);
        }
        else {
            cout << "Invalid choice. Please enter 'y' to create a new vehicle or 'q' to quit." << endl;
        }
    } while (true);

    // Delete the memory allocated for the last object
    if (pVehicle != nullptr) {
        delete pVehicle;
    }

    // Objects veh1, veh2, and veh3 get deleted after the return 0 line
    return 0;
}
