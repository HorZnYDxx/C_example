#include <iostream>
using namespace std;

int main(){
    system("color f0");
    system("chcp 65001");

	int n =10;
	int* p; //int* ptr; p位置儲存的是一個int
	p=&n; //p的數字變成n儲存的位址

    cout <<"指標p儲存的位置:" << p << endl;
    cout <<"提取p儲存地址處的物件:" << *p<< endl;

    return 0;
}
