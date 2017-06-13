#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

main()
{
FILE *fp;
int n, count = 0, sum = 0, sumsq = 0;
float mean = 0.0, sd = 0.0;
clrscr();
fp = fopen("mean.dat","w");
if(fp==NULL)
{
puts("\n Can't open the file ");
exit(0);
}
printf("\n Enter some numbers. To stop use Ctrl + z :\n");
while(scanf("%d",&n)!=EOF)
fprintf(fp,"%d\t",n);
fclose(fp);
fp = fopen("mean.dat","r");
printf("\n The numbers stored in file : \n");
while(fscanf(fp,"%d",&n)!=EOF)
{
count++;
sum = sum + n;
printf("%d\t",n);
sumsq += n * n;
}
fclose(fp);
mean = sum / count;
printf("\n Mean = %0.2f",mean);
sd = sqrt((sumsq/count)-(mean*mean));
printf("\n standard derivation = %0.2f\n",sd);
getch();
return 0;
}

