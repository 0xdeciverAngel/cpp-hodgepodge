#include<iostream>
#include<windows.h>
#include<stdio.h>
#include<stdlib.h>
//#include"dll.h"
using namespace std;
int main()
{
	int a=2,b=3;
	
	HMODULE hinst=LoadLibrary("3.dll");
	cout<<hinst<<endl;
	int (*dll)(int,int);
	cout<<dll<<endl;
	cout<<GetProcAddress(hinst,"add");
	cout<<typeof('a');
//	(FARPROC*)dll=GetProcAddress(hinst,"add");
//	cout<<dll<<endl;
//	cout<<dll(a,b);
//	cout<<add(a,b);
 } 