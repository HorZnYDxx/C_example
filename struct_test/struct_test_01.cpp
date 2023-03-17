#include <iostream>
using namespace std;

int main(){
    system("color f0");
    system("chcp 65001");

    struct Student_PersonalData
    {
    char name[4];
    int age;
    char address[30];
    }
    Student_PersonalData;

    return 0;
}
