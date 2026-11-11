#include <iostream>
#include <string>

using namespace std;

// Base Class
class BaseDevice {
protected:
    string deviceBrand;

public:
    void powerOn() {
        cout << "[BaseDevice] Hardware initialized and powered ON." << endl;
    }

    void setBrand(const string &brand) {
        deviceBrand = brand;
    }
};

// Derived Class inheriting BaseDevice
class SmartPhone : public BaseDevice {
private:
    string modelNumber;

public:
    void setModel(const string &model) {
        modelNumber = model;
    }

    void makeCall(const string &contactNumber) {
        cout << "[SmartPhone (" << deviceBrand << " " << modelNumber 
             << ")] Calling: " << contactNumber << "..." << endl;
    }
};

int main() {
    SmartPhone phone;

    phone.setBrand("Samsung");
    phone.setModel("Galaxy S23");
    phone.powerOn();             // Inherited method from BaseDevice
    phone.makeCall("+91-9876543210"); // Specific method of SmartPhone

    return 0;
}
