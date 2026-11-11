#include <iostream>
#include <iomanip>

using namespace std;

// Class representing time duration and object addition
class ClockDuration {
private:
    int hours;
    int minutes;

public:
    ClockDuration(int h = 0, int m = 0) {
        hours = h;
        minutes = m;
    }

    // Function to sum two ClockDuration objects
    ClockDuration addDuration(const ClockDuration &t) const {
        int sumMinutes = minutes + t.minutes;
        int sumHours = hours + t.hours + (sumMinutes / 60);
        sumMinutes %= 60;

        return ClockDuration(sumHours, sumMinutes);
    }

    void display() const {
        cout << hours << " hrs : " 
             << (minutes < 10 ? "0" : "") << minutes << " mins" << endl;
    }
};

int main() {
    ClockDuration slot1(3, 40);
    ClockDuration slot2(2, 50);

    cout << "Duration 1: ";
    slot1.display();

    cout << "Duration 2: ";
    slot2.display();

    ClockDuration combined = slot1.addDuration(slot2);
    cout << "Combined Total: ";
    combined.display();

    return 0;
}
