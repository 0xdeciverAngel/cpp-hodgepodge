#include<Windows.h>
int main()
{
	
	keybd_event(0x5b,0,0,0);
	keybd_event('E',0,0,0);
	keybd_event('E',0,2,0);
	keybd_event(0x5b,0,2,0);
//	Sleep(3000);



		mouse_event(MOUSEEVENTF_RIGHTDOWN, x, y, 0, 0);
		mouse_event(MOUSEEVENTF_RIGHTUP, x, y, 0, 0);
	
	}
}
