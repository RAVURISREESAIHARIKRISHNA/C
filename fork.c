#include<unistd.h>
#include<stdio.h>
int main()
{
	printf("Hello\n");
	
	pid_t i;
	
	i = fork();

	if(i==0)//Child Process
	{
		printf("MY ID :%d\n",getpid());
		printf("MY Parent is %d\n",getppid());
		printf("I'm Child\n");
		printf("BYE\n");
	}	
	else//Parent Process
	{
		sleep(5);		
		printf("MY ID : %d\n",getpid());
		printf("MY parent is : %d\n",getppid());
		printf("I'm Parent\nBYE\n");
	}

	return 0;
}
