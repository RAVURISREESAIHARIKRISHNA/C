#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
class string
{
	char str[50];
	public:
	friend void operator>>(istream&din,string&s1)
	{
		din>>s1.str;
	}
	friend void operator<<(ostream&dout,string&s2)
	{
		dout<<s2.str;
	}
	void operator==(string);
	void operator+=(string);
	void operator=(string);
	void operator~();
	void operator!();
	void operator^(string);

	string()
	{
		strcpy(str,"");
	}
	string(char s[])
	{
		strcpy(str,s);
	}

};
void string::operator==(string s1)
{
	if(strcmp(str,s1.str)==0)
	{
		cout<<"\nEqual\n";
		return;
	}
	cout<<"\nNot Equal\n";
}
void string::operator+=(string s1)
{
	strcat(str,s1.str);
	cout<<"\nConcatenated String is:\n"<<str;
}
void string::operator~()
{
	strrev(str);
	cout<<"\nReversed String is:\n"<<str;
}
void string::operator=(string s1)
{
	strcpy(str,s1.str);
	cout<<"\nThe copied Str is:\n"<<str;
}
void string::operator!()
{
	char temp[50];
	strcpy(temp,str);
	strrev(temp);
	if(strcmp(temp,str)==0)
	{
		cout<<"\nPalindrome\n";
		return;
	}
	cout<<"\nNot a Palindrome\n";
}
void string::operator^(string s1)
{
	if(strstr(s1.str,str)==0)
	{
		cout<<"\nSubstring\n";
		return;
	}
	cout<<"\nNot a Substring\n";
}
void main()
{
	clrscr();
	string s1,s2;
	int ch;
	while(1)
	{
		cout<<"MENU\n1.Concatenation\n2.Compare\n3.Copy\n4.Reverse\n5.Palindrome\n6.Substring\n7.Exit\n\nChoice\n";
		cin>>ch;

		switch(ch)
		{
			case 1:
				cout<<"Enter s1:\n";
				cin>>s1;
				cout<<"\nEnter s2:\n";
				cin>>s2;
				s1+=s2;
				break;
			case 2:
				cout<<"\nENter s1:\n";
				cin>>s1;
				cout<<"\nEnter s2:\n";
				cin>>s2;
				s1==s2;
				break;
			case 3:
				cout<<"\nEnter s1:\n";
				cin>>s1;
				/*cout<<"\nEnter s2:\n";
				cin>>s2;  */
				s2=s1;
				break;
			case 4:
				cout<<"\nENter s:\n";
				cin>>s1;
				~s1;
				break;
			case 5:
				cout<<"\nNEter s:\n";
				cin>>s1;
				!s1;
				break;
			case 6:
				cout<<"\nEnter S1:\n";
				cin>>s1;
				cout<<"\nEnter s2:\n";
				cin>>s2;
				s1^s2;
				break;
			case 7:
				exit(0);
			default:
				cout<<"\nWrong\n";
		}
	}
}