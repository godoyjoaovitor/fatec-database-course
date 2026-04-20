#include <iostream>
using namespace std;

int main() {
    float weight, distance;

    do {
        cout << "Enter cargo weight (kg): ";
        cin >> weight;

        if (weight <= 0) {
            cout << "Enter a valid weight!" << "\n";
        }

    } while (weight <= 0);

    do {
        cout << "Enter delivery distance (km): ";
        cin >> distance;

        if (distance <= 0) {
            cout << "Enter a valid distance!" << "\n";
        }

    } while (distance <= 0);

    if (weight <= 100 && distance <= 200) {
        cout << "Priority freight" << "\n";
    } else if (weight > 100 || distance > 500) {
        cout << "Heavy freight" << "\n";
    } else {
        cout << "Standard freight" << "\n";
    }

    return 0;
}