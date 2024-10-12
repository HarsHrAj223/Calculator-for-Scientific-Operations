#include <iostream>
#include <cmath>  // For math functions

using namespace std;

void scientific_calculator() {
    cout << "Scientific Calculator\n";
    cout << "Options:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Power\n";
    cout << "6. Square Root\n";
    cout << "7. Logarithm\n";
    cout << "8. Sine\n";
    cout << "9. Cosine\n";
    cout << "10. Tangent\n";

    int choice;
    cout << "Choose an operation (1-10): ";
    cin >> choice;

    double num1, num2;

    switch (choice) {
        case 1:  // Addition
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Result: " << num1 + num2 << endl;
            break;

        case 2:  // Subtraction
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Result: " << num1 - num2 << endl;
            break;

        case 3:  // Multiplication
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Result: " << num1 * num2 << endl;
            break;

        case 4:  // Division
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            if (num2 != 0)
                cout << "Result: " << num1 / num2 << endl;
            else
                cout << "Error: Division by zero!" << endl;
            break;

        case 5:  // Power
            cout << "Enter base and exponent: ";
            cin >> num1 >> num2;
            cout << "Result: " << pow(num1, num2) << endl;
            break;

        case 6:  // Square Root
            cout << "Enter a number: ";
            cin >> num1;
            if (num1 >= 0)
                cout << "Result: " << sqrt(num1) << endl;
            else
                cout << "Error: Negative number!" << endl;
            break;

        case 7:  // Logarithm
            cout << "Enter a number and base of logarithm: ";
            cin >> num1 >> num2;
            if (num1 > 0 && num2 > 0 && num2 != 1)
                cout << "Result: " << log(num1) / log(num2) << endl;  // Change of base formula
            else
                cout << "Error: Invalid input!" << endl;
            break;

        case 8:  // Sine
            cout << "Enter angle in degrees: ";
            cin >> num1;
            cout << "Result: " << sin(num1 * M_PI / 180) << endl;
            break;

        case 9:  // Cosine
            cout << "Enter angle in degrees: ";
            cin >> num1;
            cout << "Result: " << cos(num1 * M_PI / 180) << endl;
            break;

        case 10:  // Tangent
            cout << "Enter angle in degrees: ";
            cin >> num1;
            cout << "Result: " << tan(num1 * M_PI / 180) << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
    }
}

int main() {
    scientific_calculator();
    return 0;
}
