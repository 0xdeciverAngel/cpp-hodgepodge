#include<iostream>
using namespace std;
class Node
{
	public:
	int data;
	Node *right;
	Node *left;
}; 
typedef Node *node;
void postorder(node in)
{
	if(in!=NULL)
	{
		
		postorder(in->left);
		postorder(in->right);
		cout<<in->data<<endl;
	}
}
void preorder(node in)
{
	if(in!=NULL)
	{
		cout<<in->data<<endl;
		preorder(in->left);
		preorder(in->right);
	}
}
void inorder(node in)
{
	if(in!=NULL)
	{
		inorder(in->left);
		cout<<in->data<<endl;
		inorder(in->right);
	}
}
node add(node in,int num)
{
		node back,current,newn=new Node;
		newn->data=num;
		newn->right=NULL;
		newn->left=NULL;
		cout<<newn<<" :"<<num<<endl;
		if(in==NULL)
		{
				return newn;
		}
		else
		{
			current=in;
			while(current!=NULL)
			{
				back=current;
				if(current->data>num)
				{
					current=current->left;
				}
				else
				{
					current=current->right;
				} 
			}
			if(back->data>num)
			{
				back->left=newn;
			}
			else
			{
				back->right=newn;
			}
		}
		return in;
} 
node search(node in,int num)
{
	while(1)
	{
		if(in==NULL)
		{
			return NULL;	
		 } 
		 if(in->data==num)
		 {
		 	return in;
		 }
		 else if(in->data>num)
		{
			in=in->left;
		}
		else
		{
			in=in->right;
		}
	} 
}
node copy(node in,node source)
{
	if(source!=NULL)
	{
		in=add(in,source->data);
		copy(in,source->right);
		copy(in,source->left);
	}
	return in;
}
int main()
{
	node head=NULL,ptr;
	int n;
	for(int a=1;a<=5;a++)
	{
		cin>>n;
		head=add(head,n);
	}
	cin>>n;
	ptr=search(head,n);
	cout<<ptr<<endl<<"------------------"<<endl;	

	node a=NULL;
	a=copy(a,head);
	cout<<"----------inorder-----------"<<endl;
	inorder(a);
	cout<<"------preorder-------"<<endl; 
	preorder(head);
	cout<<"------postorder-------"<<endl; 
	postorder(head);

	
	
}

/*

1 -5 5 6 2

*/
