#include<iostream>
using namespace std;
int main(int argc,char *argv[])
{
	cout<<argc<<endl;
	for(int k=0;k<argc;k++)
	{
		cout<<argv[k]<<" ";
	}
}

