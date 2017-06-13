#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void show_game_box();
char m[3][3];
void main()
{
	int p,q;
	char ans;
	cout<<"\t\tCROSS & NOUGHT GAME\n";
	do
	{
		for(p=1;p<=3;p++)
		{
			for(q=1;q<=3;q++)
			{
				m[p][q]='';
			}
		}
		int i,j,sum=0;
		while(sum<10)
		{
		if(sum==0)
		show_game_box();
		cout<<"\n\n\nPlayer 1 is'0'\n";
		cout<<"Player 1's turn\n";
		cout<<i;
		cout<<j;
		for(;(i>3)||(j<1)||('X'==m[i][j])||('0'==m[i][j]);)
		{
			cout<<"Sorry you entered wrong choice\n";
			cout<<"Enter your choice again\n";
			cout<<i;
			cout<<j;
		}
		m[i][j]='0';
		sum++;
		show_game_box();
		if((m[1][1]=='0')&&(m[1][1]==m[1][2])&&(m[1][1]==m[1][3]))
		{
			cout<<"CONGRATULATIONS!!!!!!!!!!\n";
			cout<<"player 1 wins the game\n";
			break;
		}
		if((m[2][1]=='0')&&(m[2][1]==m[2][2])&&(m[2][1]==m[2][3]))
		{
			cout<<"CONGRATULATIONS!!!!!!!!!!\n";
			cout<<"player 1 wins the game\n";
			break;
		}
		if((m[3][1]=='0')&&(m[3][1]==m[3][2])&&(m[3][1]==m[3][3]))
		{
			cout<<"CONGRATULATIONS!!!!!!!!!!\n";
			cout<<"player 1 wins the game\n";
			break;
		}
		if((m[1][1]=='0')&&(m[1][1]==m[2][2])&&(m[1][1]==m[3][3]))
		{
			cout<<"CONGRATULATIONS!!!!!!!!!!\n";
			cout<<"player 1 wins the game\n";
			break;
		}
		if((m[1][3]=='0')&&(m[1][3]==m[2][2])&&(m[1][1]==m[3][1]))
		{
			cout<<"CONGRATULATIONS!!!!!!!!!!\n";
			cout<<"player 1 wins the game\n";
			break;
		}
		if((m[1][1]=='0')&&(m[1][1]==m[2][1])&&(m[1][1]==m[3][1]))
		{
			cout<<"CONGRATULATIONS!!!!!!!!!!\n";
			cout<<"player 1 wins the game\n";
			break;
		}
		if((m[1][2]=='0')&&(m[1][2]==m[2][2])&&(m[1][2]==m[3][2]))
		{
			cout<<"CONGRATULATIONS!!!!!!!!!!\n";
			cout<<"player 1 wins the game\n";
			break;
		}
		if((m[1][3]=='0')&&(m[1][3]==m[2][3])&&(m[1][1]==m[3][3]))
		{
			cout<<"CONGRATULATIONS!!!!!!!!!!\n";
			cout<<"player 1 wins the game\n";
			break;
		}
		if(sum==9)
		{
			cout<<"\t\tHURRAY!!!!! The game is over\n";
			cout<<"\t\tNO ONE WINS\n";
			cout<<"The game is draw\n";
			break;
		}
		cout<<"\n\n\nPlayer 2 is'X'\n";
		cout<<"Player 2's turn\n";
		cout<<i;
		cout<<j;
		for(;(i>3)||(j<1)||('X'==m[i][j])||('0'==m[i][j]);)
		{
			cout<<"Sorry you entered wrong choice\n";
			cout<<"Enter your choice again\n";
			cout<<i;
			cout<<j;
		}
		m[i][j]='X';
		sum++;
		show_game_box();
		if((m[1][1]=='X')&&(m[1][1]==m[1][2])&&(m[1][1]==m[1][3]))
		{
			cout<<"CONGRATULATIONS!!!!!!!!!!\n";
			cout<<"player 2 wins the game\n";
			break;
		}
		if((m[2][1]=='X')&&(m[2][1]==m[2][2])&&(m[2][1]==m[2][3]))
		{
			cout<<"CONGRATULATIONS!!!!!!!!!!\n";
			cout<<"player 2 wins the game\n";
			break;
		}
		if((m[3][1]=='X')&&(m[3][1]==m[3][2])&&(m[3][1]==m[3][3]))
		{
			cout<<"CONGRATULATIONS!!!!!!!!!!\n";
			cout<<"player 2 wins the game\n";
			break;
		}
		if((m[1][1]=='X')&&(m[1][1]==m[2][2])&&(m[1][1]==m[3][3]))
		{
			cout<<"CONGRATULATIONS!!!!!!!!!!\n";
			cout<<"player 2 wins the game\n";
			break;
		}
		if((m[1][3]=='X')&&(m[1][3]==m[2][2])&&(m[1][1]==m[3][1]))
		{
			cout<<"CONGRATULATIONS!!!!!!!!!!\n";
			cout<<"player 2 wins the game\n";
			break;
		}
		if((m[1][1]=='X')&&(m[1][1]==m[2][1])&&(m[1][1]==m[3][1]))
		{
			cout<<"CONGRATULATIONS!!!!!!!!!!\n";
			cout<<"player 2 wins the game\n";
			break;
		}
		if((m[1][2]=='X')&&(m[1][2]==m[2][2])&&(m[1][2]==m[3][2]))
		{
			cout<<"CONGRATULATIONS!!!!!!!!!!\n";
			cout<<"player 2 wins the game\n";
			break;
		}
		if((m[1][3]=='X')&&(m[1][3]==m[2][3])&&(m[1][1]==m[3][3]))
		{
			cout<<"CONGRATULATIONS!!!!!!!!!!\n";
			cout<<"player 2 wins the game\n";
			break;
		}
		if(sum==9)
		{
			cout<<"\t\tHURRAY The game is over\n";
			cout<<"\t\tNO ONE WINS\n";
			cout<<"\t\tThe game is drawn\n";
			break;
		}
		}
		cout<<ans;
	}while((ans=='y')||(ans=='Y'));
	system("PAUSE");
	getch();
}
void show_game_box()
{
	cout<<"\n    1 2 3\n"<<endl;
	cout<<"  1 "<<m[1][1]<<"|"<<m[1][2]<<"|"<<m[1][3]<<endl;
	cout<<"    -|-|-\n";
	cout<<"  2 "<<m[2][1]<<"|"<<m[2][2]<<"|"<<m[2][3]<<endl;
	cout<<"    -|-|-\n";
	cout<<"  3 "<<m[3][1]<<"|"<<m[3][2]<<"|"<<m[3][3]<<"\n\n\n";
}