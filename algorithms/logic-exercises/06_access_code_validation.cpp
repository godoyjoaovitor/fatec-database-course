#include <iostream>
using namespace std;

int main() {
    int code;

    do {
        cout << "Enter access code: ";
        cin >> code;

        if (code != 145 && code != 235 && code != 322)
            cout << "Invalid code. Try again.\n";

    } while (code != 145 && code != 235 && code != 322);

    switch (code) {
        case 145:
            cout << "Administrator - Full access" << "\n";
            break;
        case 235:
            cout << "Employee - Basic access" << "\n";
            break;
        case 322:
            cout << "Visitor - Restricted access" << "\n";
            break;
    }

    return 0;
}