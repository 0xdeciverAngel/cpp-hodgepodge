#include<iostream>
#include<vector> 
using namespace std;
int main()
{
	int a, p = 1,mm=0,qq=0;
	cin >> a;
	mm=a-1;
	for (int k = 1; k <= a; k++)
	{
		for (int n = 1; n <= k; n++)
		{
			if(p<=10)
			{
			cout << p <<"  ";
			}
			else
			{
			cout << p <<" ";
			}
			p++;
		}
		cout << endl;
	}
//---------------------------------------------
	p=1;
	for(int li=1;li<=a;li++)
	{
		cout<<p<<"  ";
		if(p!=1)
		{
			qq+=p+mm;
			for(int g=1;g<=p-1;g++)
			{
				if(qq<=10)
				{cout<<qq<<"  ";} 
				else
				{cout<<qq<<" ";}
				mm--;
				qq+=mm;
			}
		qq=0;
		mm=a-1;
		}
		
		p++;
		cout<<endl;
	}	 
//---------------------------------------------
	int siz=3;
	if(a>=1)
	{
		cout<<"1"<<endl;
		if(a>=2)
		{
			cout<<"1  1"<<endl;
		}
	}
	vector<int> num;
	num.resize(siz);
	num[1]=2;
	for(int li=1;li<=a-2;li++)
	{
		num[0]=1;
		num[siz-1]=1;
		for(int w=0;w<=siz-1;w++)
		{
			cout<<num[w]<<"  ";
		}
		cout<<endl;
		siz+=1;
		num.resize(siz);
		for(int u=siz-2;u>=1;u--)
		{
			num[u]=num[u]+num[u-1];
		}
	} 
}
