#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
	
	{
	
	char c[]="1224367";
	char *p=c;
//	printf("%c\n",*p);
	printf("%c\n",*p++);//1 2
	printf("%c\n",*(p++));//2 3 
	printf("%c\n",(*p)++);//2 3
	printf("%c\n",*++p);//4 4
	printf("%c\n",*(++p));//3 5
	printf("%c\n",++*p);//4 5
	printf("%c\n",++(*p));//5 5
 	printf(c);
 	cout<<endl;
 	/*
 		*  
	 首先，明確：++的優先級高於*的優先級。
（*p)++
//首先取p所指向的值，給它所指向的值做後綴加，由於是後綴加，所以返回原來表達式的值，即該表達式最後的值為p所指向的值
*p++
//它相當於*(p++),首先指針p後移，由於對指針是後綴加，所以p++返回p沒移時的指針，如果是數組，那麼表達式的值為指針當前所指元素(指針沒有後移時)的值
++*p
//即相當於++(*p),先取p所指向的值，然後施以 前綴加，則該表達式的值為p當前所指對象的值+1的結果。
*++p
//相當於*(++p),指針p先後移，如果是數組，則指向下一個元素，然後++p返回指針下移後的指針。然後*取下移指針後所指向的值
	 */
	 }
 	{
 		char c[]="1224367";
	char *p=c;
//	printf("%x\n\n",*p);
/*	printf("%x\n",p++);
	printf("%x\n",(p++));
	printf("%x\n",(p)++);
	printf("%x\n",++p);
	printf("%x\n",(++p));
	printf("%x\n",++p);
	printf("%x\n",++(p));
 	printf(p);*/
	 }
 } 
