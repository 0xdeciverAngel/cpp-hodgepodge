#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
void hanoi(int n, char A, char B, char C)//from,tmp,obj
{
    if (n == 1)
    {
        cout<<"move "<<n<<"from "<<A<<"to "<<C<<endl;
    }
    else
    {
        hanoi(n - 1, A, C, B);
        cout<<"move "<<n<<"from "<<A<<"to "<<C<<endl; //or hanoi(1, A, B, C);
        hanoi(n - 1, B, A, C);
    }
}
int main(void)
{
    int n;
    cin>>;
    hanoi(n, 'A', 'B', 'C');
}

