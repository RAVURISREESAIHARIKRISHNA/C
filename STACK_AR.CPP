#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

class Stack
{
	int *a;
	int Size;
	int top;
public:
	Stack(int size)
	{
		a = (int*)malloc(sizeof(int)*size);
		Size = size;
		top=0;
	}

	~Stack()
	{
		free(a);
	}
	void push(int);
	void display();
	int pop();

	int isempty();
	int isfull();

};

void Stack::push(int item)
{
	if(this->isfull()!=1)
	{
		a[top++]=item;
		return;
	}
	cout<<"Stack Full\n";
}
int Stack::pop()
{
	if(this->isempty()!=1)
	{
		int x=a[top-1];
		top--;
		return x;
	}
	return -1;
}
void Stack::display()
{
	cout<<"\nStack is :\n";
	if(this->isempty()!=1)
	{for(int i=top-1;i>=0;i--)
	{
		cout<<"|"<<a[i]<<"|"<<"\n";

	}
	cout<<"__";return;}
	cout<<"Empty\n";
}

int Stack::isfull()
{
	if(top==Size)
	return 1;
	return 0;
}
int Stack::isempty()
{
	if(top==0)
	return 1;
	return 0;
}

void main()
{
	clrscr();
	cout<<"**********MENU**********";
	Stack OBJ(5);
	while(1)
	{
		int ch;
		cout<<"1.Push\n2.POP\n3.Display\n4.EXIT\NEnter your Choice\n";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"Enter the element to be pushed";
				cin>>ch;
				OBJ.push(ch);
				break;
			case 2:
				ch = OBJ.pop();
				if(ch==-1)
				{
					cout<<"Stack is Empty";
					break;
				}
				cout<<ch<<"\n";
				break;
			case 3:
				OBJ.display();
				break;
			case 4:
				exit(0);
			default:
				cout<<"Wrong Entry\nTry again";

		}
	}
}