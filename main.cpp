#include <iostream>
using namespace std;

int main() {

    double num1, num2, result;
    char operation;
    char choice;

    cout << "=============================\n";
    cout << "      SIMPLE CALCULATOR      \n";
    cout << "=============================\n";

    // Input first two numbers
    cout << "\nEnter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    // Input operation
    cout << "Choose operation (+, -, *, /): ";
    cin >> operation;

    // Perform first calculation
    switch(operation) {

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
            if(num2 != 0)
                result = num1 / num2;
            else {
                cout << "Error! Division by zero is not allowed.\n";
                return 0;
            }
            break;

        default:
            cout << "Invalid operation!\n";
            return 0;
    }

    // Display result
    cout << "\nResult = " << result << endl;

    // Continuous calculations
    do {

        cout << "\nDo you want to continue calculations? (y/n): ";
        cin >> choice;

        if(choice == 'y' || choice == 'Y') {

            cout << "Enter next operation (+, -, *, /): ";
            cin >> operation;

            cout << "Enter next number: ";
            cin >> num2;

            switch(operation) {

                case '+':
                    result = result + num2;
                    break;

                case '-':
                    result = result - num2;
                    break;

                case '*':
                    result = result * num2;
                    break;

                case '/':
                    if(num2 != 0)
                        result = result / num2;
                    else {
                        cout << "Error! Division by zero is not allowed.\n";
                        continue;
                    }
                    break;

                default:
                    cout << "Invalid operation!\n";
                    continue;
            }

            cout << "Updated Result = " << result << endl;
        }

    } while(choice == 'y' || choice == 'Y');

    cout << "\nFinal Result = " << result << endl;
    cout << "\nCalculator Closed.\n";

    return 0;
}
