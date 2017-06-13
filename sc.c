#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdio.h>

int main(int argc , char *argv[])
{
	char buffer[10];
	int fd,i;
//	printf("%d",fd);
	fd = open(argv[1],O_RDONLY);
	printf("%d\n",fd);
	
			
	i = read(fd , buffer , 1);
	while(i!=0)
	{
		write(1,buffer,1);
		i = read(fd , buffer ,1);
	}	
//	read(0,buffer,5);
//	write(1,buffer,5);
	printf("\n");

	return 0;
}
