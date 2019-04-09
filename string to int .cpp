#include<iostream>
#include<sstream>//<--include<string>
using namespace std;
int main()
{
	//way1
		stringstream ss;
		string str;
		ss.str("");
		ss.clear();
		int num=11;
		ss<<num;
		ss>>str;	
		ss.str("");
		ss.clear();	
		str="55555";
		ss<<str;
		ss>>num;
//------------------------------
	//way2
	int val;
    string stro("1234567");
    istringstream is(stro);
    is>>val;
    cout<<val<<endl;
    
}

