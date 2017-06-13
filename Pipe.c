#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>

int main()
{

	pid_t i;
	int fd[2];
	pipe(fd);
	char buff[10];
	i = fork();

	if(i==0)
	{
		close(fd[1]);
		read(fd[0] , buff , 6);
		close(fd[0]);
		printf("%s\n",buff);
	}
	else
	{
		close(fd[0]);
		write(fd[1] , "Hello\n" , 6);
		close(fd[1]);
	}

	return 0;
}
