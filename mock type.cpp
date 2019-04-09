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
	t("〔即時新聞／綜合報導〕中國山東大學退休教授孫文廣昨晚接受電視節目電話專訪，對中國時政表達個人看法，但過程中警方疑似闖入孫文廣住家，直接將人帶走。");
}
