#include <iostream>

using std::cout;
using std::endl;

#include "Account.h"

int main() {
    Account a1;
    a1.Deposit(90);
    cout << "After depositing 90 balance is " << a1.GetBalance() << endl;
    for (auto s: a1.Report()) {
        cout << s << endl;
    }
    a1.Withdraw(50);
    if (a1.Withdraw(100)) {
        cout << "ok" << endl;
    }

    cout << "after withdrawing 50 then 100" << endl;
    for (auto s: a1.Report()) {
        cout << s << endl;
    }

    return 0;
}
