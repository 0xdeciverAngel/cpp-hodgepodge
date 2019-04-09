#include<iostream>
using namespace std;
int main()
{
	int arr[10];
	int i=0;
	int n;
	int k;
	cin>>n;
	while(n/2>=1)
	{
		k=n%2;
		arr[i]=k;
		//cout<<n%2<<" ";
		n/=2;
		i++;
	}
	//cout<<"1";
	arr[i]=1;
	for(int a=i;a>=0;a--)
	{
		cout<<arr[a]<<" ";
	}


	//  10-> 1010
	
	
 } 
