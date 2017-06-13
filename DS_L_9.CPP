#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int n;
void merge(int[],int,int,int);
void mergesort(int[],int,int);
void main()
{
	clrscr();
	int *a,i;
	printf("enter size\n");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));

	for(i=0;i<=n-1;i++)
	{
		printf("\neneter % d element= ",i+1);
		scanf("%d",&a[i]);

	}

	mergesort(a,0,n-1);
	printf("\nThe sorted array is :\n");
	for(i=0;i<=n-1;i++)
	{
		printf("%d\t",a[i]);
	}
	getch();
	free(a);
}
void mergesort(int a[],int low_bound,int up_bound)
{
	int mid;
	if(low_bound<up_bound)
	{
		mid=(low_bound+up_bound)/2;
		mergesort(a,low_bound,mid); //LEFT CHAIN
		mergesort(a,mid+1,up_bound); //RIGHT CHAIN
		/*here the left and right chains terminate untill separated by
		as individual elements.

		ex:
		[2][6]  ->low_bound < up_bound so it will divide
		next:
		[2]   [6]  ->low_bound NOT< up_bound ,so it will stop*/
		merge(a,low_bound,up_bound,mid);/*merging all individual elemental chains.
		this is better shown in the merge program*/
	}
}

void merge(int a[],int low_bound,int up_bound,int mid)
{
	int i=low_bound,j=mid+1,*temp,k=0;
	temp=(int*)malloc(n*sizeof(int));
	while(i<=mid&&j<=up_bound)
	{
		if(a[i]<a[j])
		{
			temp[k]=a[i];
			i+=1;
		}
		else
		{
			temp[k]=a[j];
			j+=1;
		}
		k+=1;
	}
	while(i<=mid)           /*filling ARRERS*/
	{
		temp[k]=a[i];
		k+=1;
		i+=1;
	}
	while(j<=up_bound)
	{
		temp[k]=a[i];
		k+=1;
		j+=1;
	}



	for(i=low_bound,j=0;i<=up_bound;i++,j++)
	{
		a[i]=temp[j];
	}

}