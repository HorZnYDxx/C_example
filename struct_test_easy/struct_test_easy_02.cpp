#include <stdio.h>
#include <iostream>
using namespace std;

typedef const char* String;

typedef struct Account {
    String id;
    String name;
    double balance;
} Account;

void printAcct(Account acct) {
    printf("Account(%s, %s, %f)\n", acct.id, acct.name, acct.balance);
}

int main() {
    system("color f0");
    system("chcp 65001");
    Account accts[] = {
        {"123-456-789", "Justin Lin", 1000},
        {"789-654-321", "Monica Huang", 1000}
    };

    for(int i = 0; i < 2; i++) {
        printAcct(accts[i]);
    }

    return 0;
}
