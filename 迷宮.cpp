#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>


using namespace std;
int main()
{
	
	int x,y,p,q;
	char c;
	x=1;
	y=1;
	p=1;
	q=20;
	char a[25][30]={  "#####################",
					  "#O#   #    ## ## ##  ",
					  "# # #   ##  # # # # #",
					  "# #  ## ##   # ## # #",
					  "# # #     ## # ## # #",
					  "# # # # #  #    ##  #",
					  "# #  # # ## # #    ##",
					  "# #        # # #### #",
					  "# # ##### # # ## ####",
					  "# ##    # ##        #",
					  "#    ## #  # ##### ##",
					  "##### # # ## #   #  #",
					  "# #     #    # #   ##",
					  "#   #########  #### #",
					  "# ##         # ## ##",
					  "# # ####### ##      #",
					  "#   ##   ##   #### ##",
					  "# #    #    #       #",
					  "#####################",
					 };
	for(int k=0;k<25;k++)
	{
		for(int q=0;q<25;q++)
		{
			cout<<a[k][q];
		}
		cout<<endl;
		
	}
	cout<<"---------------------------"<<endl;
	cout<<"�a����l�e���X�f"<<endl;
	cout<<"�M��L���R�H"<<endl;
	cout<<"�ϥ� �^��p�g a,s,d,w ����"<<endl;
	
	while(x!=p||y!=q)
	{
					c=getch();
						if(c=='s')
						{
							if(a[x+1][y]!='#')
							{
								a[x][y]=' ';
								x++;
								a[x][y]='O';
							}
						}
						if(c=='w')
						{
							if(a[x-1][y]!='#')
							{
								a[x][y]=' ';
								x--;
								a[x][y]='O';
							}
						}
					if(c=='a')
						{
							if(a[x][y-1]!='#')
							{
								a[x][y]=' ';
								y--;
								a[x][y]='O';
							}
						}
					if(c=='d')
						{
							if(a[x][y+1]!='#')
							{
								a[x][y]=' ';
								y++;
								a[x][y]='O';
							}
						}
		
					system("cls");
				for(int k=0;k<25;k++)
				{
					for(int q=0;q<25;q++)
					{
						cout<<a[k][q];
					}
					cout<<endl;	
				}
				cout<<"---------------------------"<<endl;
						cout<<"�a��==�e���X�f"<<endl;
	cout<<"�M��L��--"<<endl;
	cout<<"�ϥ� �^��p�g a,s,d,w ����"<<endl;
				
	
	}
	system("cls");
	cout<<"==--��"<<endl<<endl<<endl;
	char lo[40][40]={"       *******      ** **       ",
					 "  *****     *       *  *        ",
					 "    *  *    *       *  *        ",
					 "  *  *  *  *   *   *   *********",
					 "  **************   ** *   *   * ",
					 " *     *      *   **  *   *  *  ",
					 " * * *  *  * *   * * *    *     ",
					 "   * *     * *     *   ** * *   ",
					 "  *   ****** *     *   *  *  *  ",
					 "    * *            *  **  *  ** ",
					 "     *******       *  *   *   * ",
					 "    ** *  *        *  *   *   * ",
					 "        **         *      *     ",
					 "      **  **       *    * *     ",
					 "    ***    ***     *     *      ",    
					};
	for(int k=0;k<20;k++)
				{
					for(int q=0;q<40;q++)
					{
						cout<<lo[k][q];
					}
					cout<<endl;	
				}
				int e;
	cin>>e;
}

