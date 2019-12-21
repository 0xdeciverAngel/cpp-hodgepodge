#include<iostream>
using namespace std;
int main()
{
 	int q[10],sum=0,max=-1;
 	for(int a=0;a<10;a++)
 	{
 		cin>>q[a];
	 }
	 for(int a=0;a<10;a++)
	 {
	 	sum+=q[a];
	 	if(sum<0)
	 	{
	 		sum=0;
		 }
		 if(sum>max)
		 {
		 	max=sum;
		 }
	 }
	 cout<<max;
}
//1 2 3 4 5 -10 30 20 -40 10
