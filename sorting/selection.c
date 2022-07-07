#include<stdio.h>
#define SIZE 100
void selection(int [],int);
int main()
{
	int array[SIZE],n,i;
	printf("enter a size of array:\n");
	scanf("%d",&n);
	printf("enter the array of elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&array[i]);
	printf("before sort the array elements:\n");
	for(i=0;i<n;i++)
		printf("%d\t",array[i]);
	selection(array,n);
}
void selection(int a[],int n)
{
	int i,j,min,temp;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[min]>a[j])
			{
				min=j;
				temp=a[min];
				a[min]=a[i];		
				a[i]=temp;
			}
		}
	}
	printf("\nafter sort the array elements:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
}
