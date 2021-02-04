#include<iostream>
#include<windows.h>
#include<stdio.h>
#include<stdlib.h>
//#include"dll.h"
using namespace std;
typedef int (__stdcall *f)(int,int);
typedef int (*dll)(int,int);
int main()
{
	int a=2,b=3;

	HMODULE hinst=LoadLibrary("3.dll");
	cout<<hinst<<endl;
	cout<<GetProcAddress(hinst,"add")<<endl;
	
	f add=(f)GetProcAddress(hinst,"add");
	cout<<add(a,b);
	
//	int (*dll)(int,int);
//	cout<<dll<<endl;
 	dll q=(dll)GetProcAddress(hinst,"add");
	cout<<q(a,b);
 }