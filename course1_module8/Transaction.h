//
// Created by Fernando Marquardt on 5/23/23.
//

#ifndef COURSE1_MODULE7_TRANSACTION_H
#define COURSE1_MODULE7_TRANSACTION_H


#include <string>

class Transaction {
private:
    int amount;
    std::string type;
public:
    Transaction(int amt, std::string kind);

    std::string Report();
};


#endif //COURSE1_MODULE7_TRANSACTION_H
