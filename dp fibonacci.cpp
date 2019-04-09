
#include <iostream>  
#include <vector>  
using namespace std;  
unsigned long long int  b[300],a[300];

unsigned long long int f(int n)  
{  
    if(n==0)  
    {
    	return 0;
	}   
	else if(n==1)
	{
		return 1;
	}
    else  
    {  
    	if(b[n]!=0)
    	{
    		return b[n];
		}
		else
		{
			b[n]=f(n-2)+f(n-1);  
        	return b[n];  
		}
        
    }  
}  
int main()  
{  
		b[1]=1;
		b[0]=0;
		a[1]=1;
		a[0]=0;
        int n;
        cin>>n;
        for(int q=2;q<300;q++)
        {
        	a[q]=a[q-1]+a[q-2];
		}
		cout<<f(n)<<endl;
		for(int q=0;q<n+1;q++)
		{
			cout<<q<<":  "<<b[q]<<"   "<<a[q];
			if(a[q]==b[q])
			{
				cout<<"      Same";
			}
			cout<<endl;
		}
		cout<<"最大到94位，unsigned long long int 極限惹 之後就over flow" ;
}   
