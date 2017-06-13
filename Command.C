#include<stdio.h>
#include<stdlib.h>

int main(int argc,char* argv[])
{
	printf("No.of Arguments :  %d\n",argc);
	int i;
	for(i=0;i<=argc-1;i++)	
		printf("Argument is %d\n",atoi(argv[i]));
	return 0;
}
