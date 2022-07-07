#include<stdio.h>
#define SIZE 100
void insertion(int a[],int);
int main()
{
	int array[SIZE],n,i;
	printf("enter the size of array:\n");
	scanf("%d",&n);
	printf("enter the array elemets:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("before sort the array of elements:\n");
	for(i=0;i<n;i++)
		printf("%d\t",array[i]);
	insertion(array,n);

}
void insertion(int a[],int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		j=i-1;
		temp=a[i];
		while( j >= 0 && a[j] >temp)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
	printf("\nafter sorting the array elements:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
}

