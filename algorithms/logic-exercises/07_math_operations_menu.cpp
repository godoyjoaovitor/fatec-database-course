#include <iostream>
using namespace std;

int main() {
    double n1, n2, n3, result;
    int option;
    char again;

    do {
        cout << "Enter first number: ";
        cin >> n1;

        cout << "Enter second number: ";
        cin >> n2;

        cout << "Enter third number: ";
        cin >> n3;

        do {
            cout << "\n1 - Sum" << "\n";
            cout << "2 - Average" << "\n";
            cout << "3 - Multiplication" << "\n";
            cout << "Choose an option: ";
            cin >> option;

        } while (option < 1 || option > 3);

        switch (option) {
            case 1:
                result = n1 + n2 + n3;
                cout << "Result: " << result << "\n";
                break;

            case 2:
                result = (n1 + n2 + n3) / 3.0;
                cout << "Result: " << result << "\n";
                break;

            case 3:
                result = n1 * n2 * n3;
                cout << "Result: " << result << "\n";
                break;
        }

        cout << "Do you want to continue? (y/n): ";
        cin >> again;

    } while (again == 'y' || again == 'Y');

    return 0;
}