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
	 �����A���T�G++���u���Ű���*���u���šC
�]*p)++
//������p�ҫ��V���ȡA�����ҫ��V���Ȱ����[�A�ѩ�O���[�A�ҥH��^��Ӫ�F�����ȡA�Y�Ӫ�F���̫᪺�Ȭ�p�ҫ��V����
*p++
//���۷��*(p++),�������wp�Ჾ�A�ѩ����w�O���[�A�ҥHp++��^p�S���ɪ����w�A�p�G�O�ƲաA�����F�����Ȭ����w��e�ҫ�����(���w�S���Ჾ��)����
++*p
//�Y�۷��++(*p),����p�ҫ��V���ȡA�M��I�H �e��[�A�h�Ӫ�F�����Ȭ�p��e�ҫ���H����+1�����G�C
*++p
//�۷��*(++p),���wp���Ჾ�A�p�G�O�ƲաA�h���V�U�@�Ӥ����A�M��++p��^���w�U���᪺���w�C�M��*���U�����w��ҫ��V����
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
