#include <iostream>

using std::cout;
using std::cin;

int main() {
    cout << "Hello, World!" << '\n';
    cout << 34 << '\n';
    cout << '\n' << '\n';

    int i = 2 + 2;
    cout << i << '\n';
    i = i * 3;
    cout << i << '\n';

    int j = 2;
    cout << j << '\n';

    i = 4.8;
    j = 7 / 2;
    cout << i << " " << j << '\n';

    float f = 4.9;
    cout << f << '\n';

    f = 9.0 / 5;
    cout << f << '\n';

    cout << "Enter a number: ";
    cin >> i;
    cout << i * 2 << '\n';

    return 0;
}
