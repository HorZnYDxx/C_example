#include <string>
#include "account.h"
using namespace std;

Account::Account(string id, string name, double balance) {
    this->id = id;
    this->name = name;
    this->balance = balance;
}
