#include <fstream>
#include <iostream>
using namespace std;
int main ()
{
	fstream in("input.png",ios::binary|ios::in);
	fstream out("output.png",ios::binary|ios::out);
	
	char c;
	while(true) 
	{
		c=in.get();
		if(in.eof())
		{
		 break;	
		}
	 	out.put(c);
	}
	
	
}
