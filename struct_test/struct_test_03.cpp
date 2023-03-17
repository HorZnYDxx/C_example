#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;

        struct Student_Detail {
    int age;
    char *name;
    char *address;
};
struct Student_Data {
    int stuid;
    struct Student_Detail detail;
};
int main() {
    system("color f0");
    system("chcp 65001");
    struct Student_Data x;
    x.stuid = 100;
    x.detail.age = 20;
    x.detail.name = "Johnson Lee";
    x.detail.address = "Nation Chi Nan University";
       return 0;
}
