#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operation;

    cout << "Calculator Program" << endl;
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Choose an operation (+, -, *, /): ";
    cin >> operation;

    double result;

    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                cout << "Error: Division by zero is not allowed." << endl;
                return 1;
            }
            result = num1 / num2;
            break;
        default:
            cout << "Invalid operation selected." << endl;
            return 1;
    }

    cout << "Result: " << result << endl;

    return 0;
}
