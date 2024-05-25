#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

void displayMenu() {
    cout << "Scientific Calculator" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Power" << endl;
    cout << "6. Sine" << endl;
    cout << "7. Cosine" << endl;
    cout << "8. Tangent" << endl;
    cout << "9. Exit" << endl;
    cout << "Enter your choice: ";
}

int main() {
    int choice;
    double num1, num2, result;

    while (true) {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1: // Addition
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                result = num1 + num2;
                cout << "Result: " << result << endl;
                break;
            case 2: // Subtraction
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                result = num1 - num2;
                cout << "Result: " << result << endl;
                break;
            case 3: // Multiplication
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                result = num1 * num2;
                cout << "Result: " << result << endl;
                break;
            case 4: // Division
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                if (num2 != 0) {
                    result = num1 / num2;
                    cout << "Result: " << result << endl;
                } else {
                    cout << "Error: Division by zero is not allowed." << endl;
                }
                break;
            case 5: // Power
                cout << "Enter base and exponent: ";
                cin >> num1 >> num2;
                result = pow(num1, num2);
                cout << "Result: " << result << endl;
                break;
            case 6: // Sine
                cout << "Enter an angle in degrees: ";
                cin >> num1;
                result = sin(num1 * M_PI / 180.0); // Convert to radians
                cout << "Result: " << result << endl;
                break;
            case 7: // Cosine
                cout << "Enter an angle in degrees: ";
                cin >> num1;
                result = cos(num1 * M_PI / 180.0); // Convert to radians
                cout << "Result: " << result << endl;
                break;
            case 8: // Tangent
                cout << "Enter an angle in degrees: ";
                cin >> num1;
                result = tan(num1 * M_PI / 180.0); // Convert to radians
                cout << "Result: " << result << endl;
                break;
            case 9: // Exit
                cout << "Exiting..." << endl;
                exit(0);
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
        cout << endl; // For better readability
    }

    return 0;
}
