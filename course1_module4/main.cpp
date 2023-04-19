#include <iostream>

using std::cout;
using std::cin;

int main() {
//    int firstNumber;
//    int secondNumber;
//    bool keepGoing = true;
//    int answer;
//    while(keepGoing) {
//        cout << "Enter a number: ";
//        cin >> firstNumber;
//        cout << "First number entered is " << firstNumber << ".\nEnter a second number: ";
//        cin >> secondNumber;
//        cout << "Second number entered is " << secondNumber << ".\n";
//
//        if (firstNumber < secondNumber) {
//            cout << "The first number, " << firstNumber << ", is less than the second number, " << secondNumber
//                 << ".\n";
//        } else if (firstNumber == secondNumber) {
//            cout << "The first number, " << firstNumber << ", is equal to the second number, " << secondNumber << ".\n";
//        } else if (firstNumber > secondNumber) {
//            cout << "The first number, " << firstNumber << ", is greater than the second number, " << secondNumber
//                 << ".\n";
//        }
//        cout << "Compare another pair? Enter 0 if you want to stop, any other number to continue: ";
//        cin >> answer;
//        if (answer == 0) {
//            keepGoing = false;
//        }
//        for (int loop = 0; loop < 10; loop++) {
//            cout << loop << " ";
//        }
//    }

    int lowerRange = 1;
    int upperRange = 100;
    int guess;
    bool guessed = false;

    cout << "Try to guess a number from " << lowerRange << " to " << upperRange << ", or enter 0 to quit.\n";
    std::srand((unsigned int) std::time(nullptr));
    int answer = lowerRange + std::rand() % (upperRange - lowerRange);

    while (!guessed) {

        cout << "Enter your guess: ";
        cin >> guess;
        if (guess == 0) {
            break;
        }
        if (guess > answer) {
            cout << "Too high...\n";
        } else if (guess < answer) {
            cout << "Too low...\n";
        } else if (guess == answer) {
            cout << "\nCongratulations, your guess is right!\n\n";
            guessed = true;
        }
    }
    return 0;
}
