#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

int main() {
//    string name;
//    cout << "Who are you? ";
//    cin >> name;
//    string greeting = "Hello, " + name;
//    if (name == "Fernando") {
//        greeting += ", I know you";
//    }
//    greeting += "!";
//    cout << greeting << endl;
//    int l = name.length();
//    cout << "\"" + name + "\" is " << l << " characters long." << endl;

    string firstWord;
    cout << "First word: ";
//    cin >> firstWord;
    getline(cin, firstWord);
    string secondWord;
    cout << "Second word: ";
//    cin >> secondWord;
    getline(cin, secondWord);
    if (firstWord.length() > secondWord.length()) {
        cout << firstWord << " is longer than " << secondWord;
    } else if (firstWord.length() < secondWord.length()) {
        cout << firstWord << " is shorter than " << secondWord;
    } else {
        cout << firstWord << " and " << secondWord << " have the same length";
    }
    return 0;
}
