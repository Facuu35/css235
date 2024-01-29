#include <iostream>
using namespace std;

string input(string prompt) {
    cout << prompt;
    string userInput;
    getline(cin, userInput); // using getline to capture entire line
    return userInput;
}

int main() {
    while (true) {
        string operationInput;
        int num1, num2;

        operationInput = input("operation: ");

        if (operationInput.empty()) {
            break; // Exit the loop and program
        }

        if (operationInput != "add" && operationInput != "subtract" &&
            operationInput != "multiply" && operationInput != "divide" &&
            operationInput != "mod") {
            cout << operationInput << " isn't a valid operation\n";
            continue;
            }

        num1 = stoi(input("left operand: "));
        num2 = stoi(input("right operand: "));

        if (operationInput == "add") {
            cout << num1 + num2 << endl;
        } else if (operationInput == "subtract") {
            cout << num1 - num2 << endl;
        } else if (operationInput == "multiply") {
            cout << num1 * num2 << endl;
        } else if (operationInput == "divide") {
            if (num2 != 0) {
                cout << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero." << endl;
            }
        } else if (operationInput == "mod") {
            if (num2 != 0) {
                cout << num1 % num2 << endl;
            } else {
                cout << "Error: Division by zero." << endl;
            }
        }
    }

    return 0;
}
