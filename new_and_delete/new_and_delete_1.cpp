#include <iostream>
using namespace std;

int main() {
    system("color f0");
    int *p = new int(100);

    cout << "空間位址：" << p << endl
         << "儲存的值：" << *p << endl;

    *p = 200;

    cout << "空間位址：" << p << endl
         << "儲存的值：" << *p << endl;

    delete p;

    return 0;

}
