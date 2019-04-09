#include<algorithm>
#include<iostream>
#include<ctime>
using namespace std;
int search1(int arry[],int num,int start,int end)
{
	while(start<=end)
	{	int mid=(start+end)/2;
		if(num==arry[mid])
		{
			return mid;
			break;
		}
		else if(num>arry[mid])
		{
			start=mid+1;
		}
		else
		{
			end=mid-1;
		}
	}
	return -1;
}
int search(int arry[],int num,int start,int end)
{
	
	int mid=(start+end)/2;
	if(num==arry[mid])
		{
			return mid;
		}
			else if(num>arry[mid])
				{
					return search(arry,num,mid+1,end);
				}
				else
				{
						return search(arry,num,start,mid);
				}
}
int main()
{
	int arr[20];
	srand(time(NULL));
	for(int i=0;i<20;i++)
	{
		arr[i]=rand()%30;
	}
	sort(arr,arr+20);
	for(int i=0;i<20;i++)
	{
		cout<<i<<" "<<arr[i]<<endl;
	}
	int n;
	cin>>n;
	//cout<<search(arr,n,0,20);
	cout<<search1(arr,n,0,20);
}

