#include<iostream>
#include <windows.h>
using namespace std;
void openhihddenconsloe()
{
	HWND stealth;
	AllocConsole();
	stealth = FindWindowA("ConsoleWindowClass", NULL);
	ShowWindow(stealth,0);
}
int main()
{
		while(true)
		{
		int n=0;
		int x=1,y=1;
		x=rand()%1600;
		y=rand()%900;
		SetCursorPos(x,y);
		n++;
			if(n>1600)
			{
				break;
			}
		}
		
		system("pause");
}

