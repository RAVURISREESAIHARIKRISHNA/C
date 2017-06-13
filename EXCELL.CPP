#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()

{

  clrscr();
  FILE * fp;

  int countrycode[300];

  char countryname[300];

  fp=fopen("xyz.csv", "r");

  if(!fp)

{

    printf("File failed to open!\n");

getch();
exit(1);

}

  fscanf(fp,"%s%d",&countryname,countrycode);

  fclose(fp);

  fprintf(stdout,"First Line is %s%d\n",countryname, countrycode);

  getch();

}