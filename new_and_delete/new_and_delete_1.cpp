#include <iostream>
using namespace std;

int main() {
    system("color f0");
    int *p = new int(100);

    cout << "�Ŷ���}�G" << p << endl
         << "�x�s���ȡG" << *p << endl;

    *p = 200;

    cout << "�Ŷ���}�G" << p << endl
         << "�x�s���ȡG" << *p << endl;

    delete p;

    return 0;

}
