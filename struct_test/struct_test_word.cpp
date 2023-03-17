#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <bitset>

using namespace std;

    int main() {
    system("color f0");
    system("chcp 65001");


   char a[10] ;
   for(int i=0;i<10;i++){
      a[i]=0;     //刷新
   }
   strcpy(a,"ab798dhgd");


   for(int i=0;i<10;i++){
    bitset<8> x(a[i]);
    cout << x << '\n';
   }






    return 0;


}
