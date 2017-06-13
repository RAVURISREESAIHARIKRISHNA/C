#include<stdio.h>

int main(int argc , char* argv[])
{
FILE*fp;FILE*pf;
fp = fopen(argv[1] , "r");
pf = fopen(argv[2],"w");
//fclose(argv[2]);
//p fopen(argv[2],"a");
if(fp == NULL)
return 0;
char ch = fgetc(fp);
while(ch != EOF)
{fputc(ch,pf);
ch = fgetc(fp);}
fclose(fp);
fclose(pf);
printf("\n\n");
return 0;
}
