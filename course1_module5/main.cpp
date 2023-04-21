#include <iostream>
#include "functions.h"

using std::cout;
using std::endl;

int main() {
    int total = add(3, 4);
    cout << "3 + 4 = " << total << endl;

    double another = add(1.2, 3.4);
    cout << "1.2 + 3.4 = " << another << endl;

    double oneMore = add(1.1, 2.2, 3.3);
    cout << "1.1 + 2.2 + 3.3 = " << oneMore << endl;

    if (test(true)) {
        cout << "true passes the test" << endl;
    }
    if (test(3.2)) {
        cout << "3.2 passes the test" << endl;
    }
// won't work - compiler doesn't know what to do here
//    if (test(3)) {
//        cout << "3 passes the test" << endl;
//    }

    return 0;
}
