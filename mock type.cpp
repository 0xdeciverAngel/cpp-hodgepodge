#include<iostream>
#include<Windows.h>
 using namespace std;
 void t(char *p)
 {
 	int n=0;
 	if(p==NULL)
 	return;
 	while(*p)
 	{
 		cout<<*p++;
 		Sleep(60);
	 }
 }
 int main()
{
	t("�e�Y�ɷs�D����X���ɡf����s�F�j�ǰh��б®]��s�Q�߱����q���`�عq�ܱM�X�A�襤��ɬF��F�ӤH�ݪk�A���L�{��ĵ��æ����J�]��s��a�A�����N�H�a���C");
}
