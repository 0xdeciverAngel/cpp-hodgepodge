#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<iostream>
#define X asm("nop");
using namespace std;
int main()
{
	int a=0;
	X;
	float k=0.001;
	X;
	asm("nop");
}

