#include <iostream>
using namespace std;

class Car {
public:
    // Constructor
    Car() {
        cout << "Car is created 🚗" << endl;
    }

    // Destructor
    ~Car() {
        cout << "Car is destroyed 💥" << endl;
    }
};

int main() {
    Car myCar;  // Constructor is called here
    cout << "Car is being used..." << endl;
    return 0;   // Destructor is called here when main ends
}
