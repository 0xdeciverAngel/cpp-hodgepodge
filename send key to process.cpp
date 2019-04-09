
#include<iostream>
 #include<fstream>
  #include<Windows.h>
 using namespace std;
 int main()
{
	HWND windowHandle = FindWindow(NULL,"NS-SHAFT");
   
	cout<<windowHandle;
    //Send a key
    if( windowHandle ) //This one fails
    {
        while(true)
        {
            
                SendMessageA(windowHandle, WM_KEYDOWN, 0x27, 0); 
                Sleep(500); 
                SendMessageA(windowHandle, WM_KEYUP, VK_RIGHT, 0);
            	SendMessageA(windowHandle, WM_KEYDOWN, VK_LEFT, 0); 
                Sleep(500); 
                SendMessageA(windowHandle, WM_KEYUP, VK_LEFT, 0);
                   
        }
    }
}
