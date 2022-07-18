#include<stdio.h>
#define SIZE 100
void insertion(int [],int);
int main()
{
	int array[SIZE],n,i;
	printf("enter the size of array:\n");
	scanf("%d",&n);
	printf("enter the array of elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&array[i]);
	printf("before sorting the array elements are:\n");
	for(i=0;i<n;i++)
		printf("%d\t",array[i]);
	insertion(array,n);
}
void insertion(int a[],int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while(j>=0 && a[j] > temp)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
	printf("\nafter sorting the array elements are:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
}
