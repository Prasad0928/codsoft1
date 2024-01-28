#include <iostream>
using namespace std;

double add(double x, double y);
double subtract(double x, double y);
double multiply(double x, double y);
double divide(double x, double y);

int main() {
    cout << "Calculator" << endl;

    double num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "Select operation:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;

    int choice;
    cout << "Enter choice (1, 2, 3, or 4): ";
    cin >> choice;

    double result;
    switch (choice) {
        case 1:
            result = add(num1, num2);
            cout << "Addition result: " << result << endl;
            break;
        case 2:
            result = subtract(num1, num2);
            cout << "Subtraction result: " << result << endl;
            break;
        case 3:
            result = multiply(num1, num2);
            cout << "Multiplication result: " << result << endl;
            break;
        case 4:
            result = divide(num1, num2);
            if (result != -1) {
                cout << "Division result: " << result << endl;
            } else {
                cout << "Cannot divide by zero" << endl;
            }
            break;
        default:
            cout << "Invalid Input" << endl;
            break;
    }

    return 0;
}

double add(double x, double y) {
    return x + y;
}

double subtract(double x, double y) {
    return x - y;
}

double multiply(double x, double y) {
    return x * y;
}

double divide(double x, double y) {
    if (y != 0) {
        return x / y;
    } else {
        return 0;
    }
}
