#include <iostream>
#include "account_1.h"

void printAcct(Account *acct) {
    cout << "Account("
         << acct->id << ", "
         << acct->name << ", "
         << acct->balance << ")"
         << endl;
}

void printAcct(Account &acct) {
    printAcct(&acct);
}

int main() {
    system("color f0");
    system("chcp 65001");

    Account acct1;
    acct1.id = "123-456-789";
    acct1.name = "Justin Lin";
    acct1.balance = 1000;
    printAcct(acct1);

    Account *acct2 = new Account();
    acct2->id = "789-654-321";
    acct2->name = "Monica Huang";
    acct2->balance = 1000;
    printAcct(acct2);
    delete acct2;

    return 0;
}
