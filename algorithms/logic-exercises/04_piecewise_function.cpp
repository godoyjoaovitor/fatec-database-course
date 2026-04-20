#include <iostream>
using namespace std;

int main() {
    float x, fx;

    cout << "Enter value of x: ";
    cin >> x;

    if (x <= 1)
        fx = 1;
    else if (x <= 2)
        fx = 2;
    else if (x <= 3)
        fx = x * x;
    else
        fx = x * x * x;

    cout << "f(x) = " << fx << "\n";

    return 0;
}