#include<iostream>
 #include<cstring>
 using namespace std;
 int main()
{
	int a[100000];
	memset(a,-1,sizeof(a));
	for(int i=0;i<100000;i++)
	{
		cout<<a[i]<<" ";
	}
	
}
