#include <stdio.h> 
#include<stdlib.h>
#include <iostream> 
using namespace std; 

int main()
 {
    int *ptr = new int; 
	*ptr = 50;	
    cout << "�Ŷ���m:" << ptr 
         << endl; 
    cout << "�Ŷ��x�s�ȡG" << *ptr
         << endl; 
         
    int *a =(int*)malloc(sizeof(a));
   

    delete ptr;

    return 0; 
}
