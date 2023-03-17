#include <stdio.h>

using namespace std;


typedef const char* String;

struct Account {
    String id;
    String name;
    double balance;
};

void printAcct(struct Account acct) {
    printf("Account(%s, %s, %f)\n", acct.id, acct.name, acct.balance);
}

int main() {
    struct Account acct;
    acct.id = "123-456-789";
    acct.name = "Justin Lin";
    acct.balance = 1000;
    printAcct(acct);      // 顯示 Account(123-456-789, Justin Lin, 1000.000000)

    return 0;
}
