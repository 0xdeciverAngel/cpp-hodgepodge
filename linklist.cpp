#include<stdlib.h>
#include<iostream>
using namespace std;
class Node
{
	public:
	int data;
	Node *next;
};
typedef Node *node; 

node add(node in,int k)//最後一個是 NULL 
{
	if(in->next==NULL)
	{
		node tp=new Node;
		in->next=tp;
		in=in->next;
	}
	in->data=k;
	in->next=NULL;
	return in;
}
/*  
node add1(node in,int k) ///// 會多新增一個 位置預備給下一個用  其NEXT==NULL && data==空(? 
{
	
	in->data=k;
//	cout<<"addr:"<<in<<endl;
	in->next=new Node;
	in=in->next;
	in->next=NULL;
//	cout<<"next:"<<in->next<<endl;
	return in;
}/*
node add2(node in,int k,node next) ///// 重新寫過  幹 還是跟上面的一樣功能 但是突然倆的都可以用 (???????黑人???? 
{
	in->data=k;
	in->next=next;
	in=in->next;
	in->next=NULL;
	return next;
}*/
/* 
node find(node in,int num)
{
	while(in->next!=NULL)
	{
		if(in->data==num)
		{
			cout<<"find :"<<num<<" "<<endl;
			break;
		}
		in=in->next;
	}
	return in;
	if(in->next==NULL)
	{ 
		cout<<"not find"<<endl;
	} 
}*/
node find(node in,int num)
{
	while(1)
	{
		if(in->data==num)
		{
			cout<<"find :"<<num<<" "<<endl;
			return in;
			break;
		}
		if(in->next==NULL)
		{
			cout<<"not find"<<endl;
			return NULL;
			break;
		}
		else
		{
			in=in->next;
		}
	}
	
} 

/*void show(node in)
{
	/*	for(int a=1;a<=6;a++)
	{
		cout<<in->data<<"%:"<<in<<"next:"<<in->next<<endl;   //會多一個從這看 
		in=in->next;
	}
	while(in->next!=NULL)	//第六看不到 
	{
		cout<<in->data<<"  &:"<<in<<"  next:"<<in->next<<endl;	//這裡只會顯示5個  因為 第六的 NEXT==NULL 
		in=in->next;
	}
}*/
void show(node in)
{
	while(1)
	{
		cout<<in->data<<"  &:"<<in<<"  next:"<<in->next<<endl;
		if(in->next==NULL)
		{
			break;
		}
		else
		{
			in=in->next;
		}
	}
}
node del(node in,int k)
{
	node found;
	found=find(in,k);
	if(found==NULL)
	{
		cout<<"CANT DEL"<<endl;
		return in;
	}
	if(found==in)
	{
		in=in->next;
		return in;
	}
	else
	{	
		node prev;
		prev=in;
		while(prev->next!=found)
		{
			prev=prev->next;
		}
		
		//cout<<found->next<<"----------------"<<endl;
		if(found->next==NULL)   //所以她媽不能用最後一的NEXT==NULL  
			{
				prev->next=NULL;
				return in;
			}
		else
		{
			prev->next=found->next;
			return in;
		}
	}
}

int main()
{
	node head,tmp;
	int n;
	head=new Node;
	tmp=head;
	for(int a=0;a<=4;a++)
	{
		cin>>n;
	//	node tp=new Node;  //給Add2 用 
	//	tmp=add2(tmp,n,tp);	 //給Add2 用 
	//	tmp=add1(tmp,n);     //ADD 1 用
	    tmp=add(tmp,n); 
	}
	cout<<"-------------------------"<<endl;
	show(head);
//---------------
/*	tmp=head;
	cout<<"find num:";
	cin>>n;
	find(tmp,n);*/
//----------
	cout<<"del num:";
	cin>>n;
	tmp=head;
	head=del(tmp,n);
//	del(tmp,n);
//-----------
	tmp=head;
	show(head);	
} 