#include <stdio.h> 
#include<stdlib.h>
#include <iostream> 
using namespace std; 

int main()
 {
    int *ptr = new int; 
	*ptr = 50;	
    cout << "空間位置:" << ptr 
         << endl; 
    cout << "空間儲存值：" << *ptr
         << endl; 
         
    int *a =(int*)malloc(sizeof(a));
   

    delete ptr;

    return 0; 
}
