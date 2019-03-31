#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<iostream>
#include <fstream>
#include<vector>
using namespace std;
int main()
{
	 ifstream  in("in.txt");
	 vector<string> arr;
	 string s;
	 while(getline(in,s))
	 {
	 	arr.push_back(s);
	 }
	 for(int a=0;a<10;a++)
	 {
	 	cout<<arr[a]<<endl;
	 }
	 cout<<endl<<arr[arr.size()-1];
		 
	 






}

