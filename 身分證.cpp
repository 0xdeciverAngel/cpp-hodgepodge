#include<string>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	//¼g¦¨¨ç¼Æ--¥¢±Ñ 
	string a;
	char b;
	int c = 0;
	cin>>a;
	b = a[0];
	switch (b)
		{
			case 'A':c = 10;break;
			case 'B':c = 11;break;
			case 'C':c = 12;break;
			case 'D':c = 13;break;
			case 'E':c = 14;break;
			case 'F':c = 15;break;
			case 'G':c = 16;break;
			case 'H':c = 17;break;
			case 'I':c = 34;break;
			case 'J':c = 18;break;
			case 'K':c = 19;break;
			case 'L':c = 20;break;
			case 'M':c = 21;break;
			case 'N':c = 22;break;
			case 'O':c = 35;break;
			case 'P':c = 23;break;
			case 'Q':c = 24;break;
			case 'R':c = 25;break;
			case 'S':c = 26;break;
			case 'T':c = 27;break;
			case 'U':c = 28;break;
			case 'V':c = 29;break;
			case 'W':c = 32;break;
			case 'X':c = 30;break;
			case 'Y':c = 31;break;
			case 'Z':c = 33;break;
		}
		int z;
		z=a.find('#');
		replace(a.begin(),a.end(),'#','0');
		int op [9];
		
		for(int k=0;k<=8;k++)
		{
			op[k]=a[k+1];
		}
		for(int k=0;k<=8;k++)
		{
		 op[k]=op[k]-48;	//new only number
		}
//----------------------------------------------
	 int fi=0,g=8;
	 c=((c%10)*9)+(c/10);
//--------------------------------------------
	
	for(int d=0;d<=9;d++)
	{
		int fi=0,r=8;
		op[z-1]=d;
		for(int u=0;u<=7;u++)
		{
			if(r!=0)
			fi+=op[u]*r;
			r--;
		}
		fi+=op[8]+c;
		if(fi%10==0)
		{
			cout<<b;
			for(int u=0;u<=8;u++)
			{
				cout<<op[u];
			}
			cout<<endl;
		}
		else
		fi=0;
		//cout<<fi;
	}
	
}
