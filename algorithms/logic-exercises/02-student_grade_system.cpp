#include <iostream>
using namespace std;

int main() {
    char Type;
    float p1, p2, l1, l2, fp, average;

    cout << "Enter student type (R = Regular, E = Special Regime): ";
    cin >> Type;

    switch (Type) {
        case 'R':
        case 'r':
            cout << "Enter Exam 1 grade: ";
            cin >> p1;

            cout << "Enter Exam 2 grade: ";
            cin >> p2;

            cout << "Enter Homework 1 grade: ";
            cin >> l1;

            cout << "Enter Homework 2 grade: ";
            cin >> l2;

            cout << "Enter Productivity Factor: ";
            cin >> fp;

            average = (((p1 + p2) / 2) * 0.5) +
                      (((l1 + l2) / 2) * 0.4) +
                      (fp * 0.1);
            break;

        case 'E':
        case 'e':
            cout << "Enter Exam 1 grade: ";
            cin >> p1;

            cout << "Enter Exam 2 grade: ";
            cin >> p2;

            average = (p1 + p2) / 2.0;
            break;

        default:
            cout << "Invalid student type." << "\n";
            return 0;
    }

    cout << "Average: " << average << "\n";

    if (average >= 6.0) {
        cout << "Approved" << "\n";
    } else if (average >= 2.0) {
        cout << "Retake exam" << "\n";
    } else {
        cout << "Failed" << "\n";
    }

    return 0;
}