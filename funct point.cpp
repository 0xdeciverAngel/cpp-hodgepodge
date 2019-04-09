#include<iostream>
using namespace std;
void a(int w)
{
	cout<<w;
} 
int main()
{
 	void (*p)(int)=a;
 	cout<<p<<endl;
 	cout<<*p<<endl;
 	cout<<&p<<endl;
 	//int *p(int)=x;
	 p(2);
}

