#include <iostream>
#include<string> 
#include<vector> 
#include<algorithm>
using namespace std;
class Node
	{
		public:
			int value;
			Node *right=NULL;
			Node *left=NULL;
	};
typedef Node *node;
bool cmp(node a,node b)
{
	return a->value<b->value;
}
void show(node in)
{
 	 if(in!=NULL)
	{
		cout<<in->value<<endl;
		
		show(in->left);
		show(in->right);
	}
}
int main()
{
	int data[]={5,12,19,33,40,41};
	vector <node> arr;
	for(int a=0;a<6;a++)
	{
		arr.push_back(new Node);
		arr[a]->value=data[a];
	}
    for(int a=0;a<5;a++)
    {/*	for(int b=0;b<arr.size();b++)
		{
			cout<<arr[b]->value<<endl;
		}*/
	//	cout<<"============"<<endl;
	    node ptr=new Node;
		ptr->value=arr[0]->value+arr[1]->value;
		ptr->left=arr[0];
		ptr->right=arr[1];
		//delete *arr[1];
		//delete arr[0];
		arr.erase(arr.begin()+1);
		arr.erase(arr.begin());
		
		arr.push_back(ptr);
		sort(arr.begin(),arr.end(),cmp);
	
	}
	show(arr[0]);
}
