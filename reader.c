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
	printf("\nWaiting for Writer...\n");
	fd = open("NPipe" , O_RDONLY);
	printf("\nGOT A WRITER\n");
	do
	{
		if( (n=read(fd,buff,100))==-1)
			perror("ERROR IN READ\n");
		else
		{
			buff[n] = '\0';
			printf("\nThe Data is %s\n",buff);
		}
	}while(n>0);
	return 0;
}