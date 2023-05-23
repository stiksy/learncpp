#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

#include <vector>
using std::vector;
using std::begin;
using std::end;

#include <algorithm>
using std::sort;
using std::count;

int main() {
    vector<int> nums;

    for (int i = 0; i < 10; ++i) {
        nums.push_back(i);
    }

    for (auto item : nums) {
        cout << item << " ";
    }
    cout << endl;

    vector<string> words;

    cout << "enter three words ";
    for (int i = 0; i < 3; ++i) {
        string s;
        cin >> s;
        words.push_back(s);
    }

    for (auto item : words) {
        cout << item << " ";
    }
    cout << endl;

    cout << "int vector nums has " << nums.size() << " elements." << endl;

    nums[5] = 3;
    nums[6] = -1;
    nums[1] = 99;

    for (auto item : nums) {
        cout << item << " ";
    }
    cout << endl;

    for (auto i = begin(nums); i != end(nums) ; ++i) {
        cout << *i << " ";
    }
    cout << endl;

    sort(begin(words), end(words));
    sort(begin(nums), end(nums));

    for (auto item : nums) {
        cout << item << " ";
    }
    cout << endl;

    for (auto item : words) {
        cout << item << " ";
    }
    cout << endl;

    int threes = count(begin(nums), end(nums), 3);
    cout << "vector of ints has " << threes << " elements with value 3" << endl;

    int tees = count(begin(words[0]), end(words[0]), 't');
    cout << "first word has " << tees << " letter t's" << endl;

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

//    string firstWord;
//    cout << "First word: ";
////    cin >> firstWord;
//    getline(cin, firstWord);
//    string secondWord;
//    cout << "Second word: ";
////    cin >> secondWord;
//    getline(cin, secondWord);
//    if (firstWord.length() > secondWord.length()) {
//        cout << firstWord << " is longer than " << secondWord;
//    } else if (firstWord.length() < secondWord.length()) {
//        cout << firstWord << " is shorter than " << secondWord;
//    } else {
//        cout << firstWord << " and " << secondWord << " have the same length";
//    }
    return 0;
}
