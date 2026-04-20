#include <iostream>
using namespace std;

int main() {
    float celsius, result;
    int option;
    char again;

    do {
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;

        cout << "1 - Fahrenheit\n2 - Kelvin\nChoose: ";
        cin >> option;

        switch (option) {
            case 1:
                result = (9.0 / 5.0) * celsius + 32;
                cout << "Temperature in Fahrenheit: " << result << "\n";
                break;
            case 2:
                result = celsius + 273.15;
                cout << "Temperature in Kelvin: " << result << "\n";
                break;
            default:
                cout << "Invalid option." << "\n";
        }

        cout << "Do another conversion? (y/n): ";
        cin >> again;

    } while (again == 'y' || again == 'Y');

    return 0;
}