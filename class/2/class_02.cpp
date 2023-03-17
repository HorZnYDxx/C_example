#include <iostream>
#include <string>
#include "account.h"

string to_string(Account &acct) {
    return string("Account(") +
           acct.id + ", " +
           acct.name + ", " +
           std::to_string(acct.balance) + ")";
}

void deposit(Account &acct, double amount) {
    if(amount <= 0) {
        cout << "必須存入正數" << endl;
        return;
    }
    acct.balance += amount;
}

void withdraw(Account &acct, double amount) {
    if(amount > acct.balance) {
        cout << "餘額不足" << endl;
        return;
    }
    acct.balance -= amount;
}

int main() {
    Account acct("123-456-789", "Justin Lin", 1000);
    cout << to_string(acct) << endl;

    deposit(acct, 500);
    cout << to_string(acct) << endl;

    withdraw(acct, 700);
    cout << to_string(acct) << endl;

    return 0;
}
