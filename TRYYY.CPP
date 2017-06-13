#include<stdio.h>
#include<conio.h.
#include<alloc.h>
void main()
{
	int *data,*temp,i,c,ch;
	data=(int*)malloc(sizeof(int));
	for(i=0;;i++)
	{
		c=getchar();
		if(c==EOF)
		break;
		else
		{
			data[i]=c;
			printf("press 1 to enter another allocation\n");
			scanf("%d",&ch);
			if(ch==1)
			{
				temp=(int*)realloc(sizeof(int));
				if(temp!=NULL)
				data=temp;
				else
				break;

			}
		}
	}
}