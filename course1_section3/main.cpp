#include <iostream>

void print(const char *message);

void print(const char *message) {
    using namespace std;
    cout << message << endl;
}

int main() {
    print("Hello, World!");
    return 0;
}
