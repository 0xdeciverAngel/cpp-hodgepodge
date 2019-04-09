#include <iostream>
using namespace std;
int main()
{
	int a=1,*ptr,**point;	
	ptr=&a;
	cout<<"--------"<<endl;
	cout<<"a:"<<a<<endl;
	cout<<"&a:"<<&a<<endl;
	cout<<"ptr:"<<ptr<<endl;
	cout<<"*ptr:"<<*ptr<<endl;
	cout<<"&ptr:"<<&ptr<<endl;
	point=&ptr;
	cout<<"------"<<endl;
	cout<<"point:"<<point<<endl;
	cout<<"*point:"<<*point<<endl;
	cout<<"**point:"<<**point<<endl;
	cout<<"&point:"<<&point<<endl;
 //	system("PAUSE");
 	return 0;
}


