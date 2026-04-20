#include <iostream>
using namespace std;

int main() {
    float weight, height, bmi;

    cout << "Enter weight (kg): ";
    cin >> weight;

    cout << "Enter height (m): ";
    cin >> height;

    bmi = weight / (height * height);

    cout << "BMI: " << bmi << "\n";

    if (bmi < 18.5)
        cout << "Underweight" << "\n";
    else if (bmi < 25.0)
        cout << "Normal weight" << "\n";
    else if (bmi < 30.0)
        cout << "Overweight" << "\n";
    else
        cout << "Obesity" << "\n";

    return 0;
}