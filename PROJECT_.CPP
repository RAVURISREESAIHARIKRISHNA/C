#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void string_copy(char d[],char s[])
{
	int i;
	for(i=0;s[i]!='\0';i++)
	d[i]=s[i];
	d[i]='\0';
}
void substring(char d[],char s[],int pos ,int len)
{
	int i;
	for(i=0;i<=len-1;i++)
	d[i]=s[pos+i-1];
	d[i]='\0';

}

int string_length(char s[])
{
	int i,length=0;
	for(i=0;s[i]!='\0';i++)
	length++;
	return(length);

}
void stringconcat(char d[],char s[])
{
	int i,len_s;
	len_s=string_length(d);
	for(i=0;i<=len_s-1;i++)
	d[len_s+i]=s[i];
	d[len_s+i]='\0';


}
void string_reverse(char s[])
{
	char temp;
	int i,j,len=string_length(s);
	for(i=0,j=len-1;i<j;i++,j--)
	{
		temp=s[i];
		s[i]=s[j];
		s[j]=temp;
	}
}
void main()
{
	clrscr();
	int len,pos,i,choice;
	char s[100],d[100];
	printf("1.copy\n2.substring\n3.concatenation\n4.reverse\n5.length\n6.exit\n");
	scanf("%d",&choice);
	if(choice==1)
	{
		printf("\nenter 's' string\n");scanf("%s",s);
		string_copy(d,s);
		printf("\n");puts(d);
	}
	if(choice==2)
	{
		printf("\nenter 's' string\n");
		//gets(s);
		scanf("%s",s);
		printf("\nnow enter position and length from where substrind 'd' should be made\n");
		scanf("%d,%d",&pos,&len);
		substring(d,s,pos,len);  printf("\n");
		printf("%s",d);
	}
	if(choice==3)
	{
	printf("\nenter string s\n");
	scanf("%s",s);//gets(s);
	printf("\nenter string d\n");
	scanf("%s",d);//gets(d);
	stringconcat(d,s); printf("\n");puts(d);
	}
	if(choice==4)
	{
		printf("\nenter s string\n");
		scanf("%s",s);//gets(s);
		string_reverse(s);  printf("\n");
		puts(s);

	}
	if(choice==5)
	{
		printf("\nenter string s\n");
		scanf("%s",s);//gets(s);
		i=string_length(s);printf("\n%d",i);

	}
	if(choice==6)
	{
	exit(0);
	}
     getch();
}
