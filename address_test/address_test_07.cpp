#include <iostream>
using namespace std;

int main(){
    system("color f0");
    system("chcp 65001");

	const int n = 10;
    const int m = 20;


    const int *p = &n;
    cout << p << endl;

    p = &m;
    cout << p << endl;


    return 0;
}
