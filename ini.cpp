#include <iostream>
#include <string>
#include <windows.h>
#include <stdio.h>
using namespace std;

int main()
{
	LPTSTR lpPath = new char[MAX_PATH];
	strcpy(lpPath, ".\\log.ini");
	LPTSTR name=new char[10000];
	GetPrivateProfileString("NAME","nam","0",name,100,lpPath);
	if(name!="0")
	{
		WritePrivateProfileString("NAME", "nam", "HERE~~~~!!", lpPath);
	}
	cout<<name<<endl;
	system("pause");
	}
	
