#include<iostream>
using namespace std;

/*int a[5][5]
={1,1,1,1,1,
  1,0,0,0,1,
  1,0,0,0,1,
  1,0,0,0,1,
  1,1,1,1,1};*/
int a[7][10] = {               /* °g®cªº°}¦C           */
         1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
         1, 0, 1, 0, 1, 0, 0, 0, 0, 1,
         1, 0, 1, 0, 1, 0, 1, 1, 0, 1,
         1, 0, 1, 0, 1, 1, 1, 0, 0, 1,
         1, 0, 1, 0, 0, 0, 0, 0, 1, 1,
         1, 0, 0, 0, 1, 1, 1, 0, 0, 1,
         1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
int find(int x ,int y)
{
	
	if(x==5&&y==8)
	{
		a[x][y]=5;
		return 1;
	}
	else
	{
		if(a[x][y]==0)
		{
			a[x][y]=9;
				if(find(x+1,y)+find(x-1,y)+find(x,y+1)+find(x,y-1)>0)
				{
					return 1;
				}
				else
				{
					a[x][y]=0;
					return 0;
				}
		}
		else
		{
			return 0;
		}
	}
}
int main()
{
	for(int w=0;w<7;w++)
	{
	
		for(int b=0;b<10;b++)
		{
			cout<<a[w][b]<<" ";
		}
		cout<<endl; 
	}
	cout<<"------------------------"<<endl; 
	find(1,1);
	for(int w=0;w<7;w++)
	{
	
		for(int b=0;b<10;b++)
		{
			cout<<a[w][b]<<" ";
		}
		cout<<endl; 
	}
}

