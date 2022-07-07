#include<stdio.h>
#define SIZE 100
void bubble_sort(int [],int);
int main()
{
	int array[SIZE],i,n;
	printf("enter the size of array:\n");
	scanf("%d",&n);
	printf("enter the array elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&array[i]);
	printf("before sorting the array elements:\n");
	for(i=0;i<n;i++)
		printf("%d\t",array[i]);
	bubble_sort(array,n);
}
void bubble_sort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i] > a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nafter sorting the array elemnets:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
}
