#include <iostream>
using namespace std;

int main() {
    int a, b, temp;

    cout << "Enter the first value:  ";
    cin >> a;

    cout << "Enter the second value: ";
    cin >> b;

    temp = a;
    a = b;
    b = temp;

    cout << "After swapping::" << "\n";
    cout << "First value = " << a << "\n";
    cout << "Second value = " << b << "\n";

    return 0;
}