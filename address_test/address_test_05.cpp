#include <iostream>
using namespace std;

int main(){
    system("color f0");
    system("chcp 65001");

	int n =10;
	int* p=&n;

    cout <<"n ="<< n  <<endl;
    cout <<"p ="<< *p <<endl;
    *p=20;

    cout <<"n =" << n  << endl;
    cout <<"p =" << *p << endl;

    return 0;
}
