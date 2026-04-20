#include <iostream>
using namespace std;

int main() {
    int sector, quantity;

    cout << "Enter sector number (1 = Assembly, 2 = Finishing, 3 = Packaging): ";
    cin >> sector;

    cout << "Enter quantity of produced parts: ";
    cin >> quantity;

    switch (sector) {
        case 1:
            if (quantity >= 100)
                cout << "Acceptable production" << "\n";
            else
                cout << "Insufficient production" << "\n";
            break;

        case 2:
            if (quantity >= 50 && quantity <= 200)
                cout << "Acceptable production" << "\n";
            else
                cout << "Out of expected range" << "\n";
            break;

        case 3:
            cout << "Acceptable production" << "\n";

            if (quantity < 30 || quantity > 500)
                cout << "Attention: adjustment needed!" << "\n";
            break;

        default:
            cout << "Invalid sector" << "\n";
    }

    return 0;
}