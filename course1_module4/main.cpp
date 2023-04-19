#include <iostream>

using std::cout;
using std::cin;

int main() {
    int firstNumber;
    int secondNumber;
    bool keepGoing = true;
    int answer;
    while(keepGoing) {
        cout << "Enter a number: ";
        cin >> firstNumber;
        cout << "First number entered is " << firstNumber << ".\nEnter a second number: ";
        cin >> secondNumber;
        cout << "Second number entered is " << secondNumber << ".\n";

        if (firstNumber < secondNumber) {
            cout << "The first number, " << firstNumber << ", is less than the second number, " << secondNumber
                 << ".\n";
        } else if (firstNumber == secondNumber) {
            cout << "The first number, " << firstNumber << ", is equal to the second number, " << secondNumber << ".\n";
        } else if (firstNumber > secondNumber) {
            cout << "The first number, " << firstNumber << ", is greater than the second number, " << secondNumber
                 << ".\n";
        }
        cout << "Compare another pair? Enter 0 if you want to stop, any other number to continue: ";
        cin >> answer;
        if (answer == 0) {
            keepGoing = false;
        }
        for (int loop = 0; loop < 10; loop++) {
            cout << loop << " ";
        }
    }
    return 0;
}
