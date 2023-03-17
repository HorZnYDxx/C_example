#include <iostream>
using namespace std;

int main(){
    system("color f0");
    system("chcp 65001");

	int n =10;
	void* p=&n;

    int *iptr=reinterpret_cast<int*>(p);
    cout << *iptr << endl; // 顯示 10


    return 0;
}
