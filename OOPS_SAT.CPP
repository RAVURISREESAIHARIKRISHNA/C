#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class stack
{
	int a[10];
	int top;
	public:
	stack()
	{
		top=-1;
	}
	void push();
	void pop();
	void display();
	void isempty();

};
void main()
{
	clrscr();
	stack z;
	int opt;
	while(1)
	{
		cout<<"\n*******STACK OPERATIONS*********\n";
		cout<<"1.push\n2.pop\n3.display\n4.isEmpty?\n5.Exit\nEnter your option...\n";
		cin>>opt;
		switch(opt)
		{
			case 1:
			z.push();
			break;

			case 2:
			z.pop();
			break;

			case 3:
			z.display();
			break;

			case 4:
			z.isempty();
			break;

			case 5:
			exit(0);

			default:
			cout<<"Wrong entry..";
		}
	}
}
void stack::push()
{
	if(top<9)
	{
		cin>>a[++top];
		cout<<a[top]<<" pushed\n";
	       //	top++;
		return;
	}
	cout<"\nFULL";
}
void stack::pop()
{
	if(top>-1)
	{
		cout<<"\nElement "<<a[top]<<" popped";
		top--;
		return;
	}
	cout<<"\nStack is empty";
}
void stack::display()
{
	if(top>-1)
	{
		cout<<"\nSTACK IS :\n";
		for(int i=top;i>=0;i--)
		{
			cout<<a[i]<<"\n";
		}
		return;
	}
	cout<<"\nSTACK IS EMPTY";

}
void stack::isempty()
{
	if(top==-1)
	{
		cout<<"\nSTACK IS EMPTY";
		return;
	}
	cout<<"\nSATCK is NOT empty";
}