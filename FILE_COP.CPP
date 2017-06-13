#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	clrscr();
	ofstream fout;
	fout.open("file1",ios::out);
	char str[100];
	cout<<"Enter a string:\n";
	cin>>str;
	fout<<str;
	fout.close();
	cout<<"\nCopying..\n";
	ifstream fin;
	fin.open("file1",ios::in);
	fout.open("file2",ios::out);
	char ch;
	while(fin.eof()!=0)
	{
		fin.get(ch);
		fout<<ch;
	}
	fin.close();
	fout.close();
	cout<<"\nCopied file is..\n";
	fin.open("file2",ios::in);
	while(fin.eof()!=0)
	{
		fin.get(ch);
		cout<<ch;
	}
	getch();
}