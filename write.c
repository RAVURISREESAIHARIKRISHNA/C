#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdio.h>
#include<errno.h>
#include<string.h>

int main()
{
	char buff[100];
	int n,fd;
	
	mknod("NPipe" , S_IFIFO | 0664 ,0);
	printf("\nWaiting for Reader...\n");
	fd = open("NPipe" , O_WRONLY);
	printf("\nGOT A Reader\n");
	while(gets(buff) , !feof(stdin))
	{
		if((n=write(fd,buff,strlen(buff)))==-1)
			perror("Error is in WRITE\n");
		else
			printf("\nTHe number of Bytes Wrote:%d\n",n);
	}
	return 0;
}
