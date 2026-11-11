#include <iostream>
#include <string>

using namespace std;

// Base vehicle class
class MotorVehicle {
protected:
    string manufacturer;

public:
    void setManufacturer(const string &make) {
        manufacturer = make;
    }
};

// Derived intermediate class: Sedan
class PassengerSedan : public MotorVehicle {
protected:
    int seatingCapacity;

public:
    void setCapacity(int seats) {
        seatingCapacity = seats;
    }
};

// Top-level derived class: High Performance Sedan
class PerformanceSportSedan : public PassengerSedan {
private:
    int topSpeedKmh;
    int horsePower;

public:
    void setPerformanceStats(int speed, int hp) {
        topSpeedKmh = speed;
        horsePower = hp;
    }

    void displaySpecs() const {
        cout << "=== Vehicle Specifications ===" << endl;
        cout << "Manufacturer:     " << manufacturer << endl;
        cout << "Seating Capacity: " << seatingCapacity << " passengers" << endl;
        cout << "Top Speed:        " << topSpeedKmh << " km/h" << endl;
        cout << "Horsepower:       " << horsePower << " HP" << endl;
    }
};

int main() {
    PerformanceSportSedan car;

    car.setManufacturer("Audi");
    car.setCapacity(5);
    car.setPerformanceStats(290, 450);

    car.displaySpecs();

    return 0;
}
