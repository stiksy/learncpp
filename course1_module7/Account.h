//
// Created by Fernando Marquardt on 5/23/23.
//

#ifndef COURSE1_MODULE7_ACCOUNT_H
#define COURSE1_MODULE7_ACCOUNT_H


#include <vector>
#include <string>
#include "Transaction.h"

class Account {
private:
    int balance;
    std::vector<Transaction> log{};
    int limit;

public:
    Account();

    std::vector<std::string> Report();

    bool Deposit(int amount);

    bool Withdraw(int amount);

    int GetBalance() {
        return balance;
    }

    void deductServiceCharge();
};


#endif //COURSE1_MODULE7_ACCOUNT_H
