#include<stdio.h>

int main(int argc , char* argv[])
{
FILE*fp;
fp = fopen(argv[1] , "r");
if(fp == NULL)
return 0;
char ch = fgetc(fp);
while(ch != EOF)
{printf("%c",ch);
ch = fgetc(fp);}
fclose(fp);
printf("\n\n");
return 0;
}
