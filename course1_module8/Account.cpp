//
// Created by Fernando Marquardt on 5/23/23.
//

#include "Account.h"

using std::vector;
using std::string;
using std::to_string;

Account::Account() : balance(0), limit(1000) {}

vector<string> Account::Report() {
    vector<string> report;

    report.push_back("Balance is " + to_string(balance));
    report.emplace_back("Transactions: ");

    for (auto t: log) {
        report.push_back(t.Report());
    }

    report.emplace_back("--------------------");
    return report;
}

bool Account::Deposit(int amount) {
    if (amount <= 0) {
        return false;
    }
    balance += amount;
    log.emplace_back(amount, "Deposit");
    deductServiceCharge();

    return true;
}

void Account::deductServiceCharge() {
    balance -= 1;
    log.emplace_back(1, "Service charge");
}

bool Account::Withdraw(int amount) {
    if (amount <= 0) {
        return false;
    }

    if ((balance + limit) >= amount) {
        balance -= amount;
        log.emplace_back(amount, "Withdraw");
        deductServiceCharge();

        return true;
    }

    return false;
}
