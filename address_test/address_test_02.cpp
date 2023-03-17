#include <iostream>
using namespace std;

int main(){
    system("color f0");
    system("chcp 65001");

	int n =10;
	int *p=&n; //type *ptr; (type)類型:int,float
    cout <<"p儲存的位置:" << p << endl;
    cout <<"n變數的位址:" << &n<< endl;

    return 0;
}
