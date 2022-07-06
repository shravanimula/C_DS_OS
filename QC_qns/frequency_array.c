
//Write a program to to find out the frequency of the elements in array?
#include<stdio.h>
#define SIZE 100
void count_frequency(int [],int);
int main()
{
	int array[SIZE],i,n;
	printf("enter a number of elemnets:\n");
	scanf("%d",&n);
	printf("enter the elments:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	count_frequency(array,n);
}
void count_frequency(int a[],int n)
{
	int i,j,freq,count=0;
	for(i=0;i<n;i++)
	{
		count=1;
		if(a[i]>0)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]==a[j])
				{
					count++;
					a[j]=-1;
				}
			}
			printf("array of element:%d\tcount=%d\n",a[i],count);
		}
	}
}	
