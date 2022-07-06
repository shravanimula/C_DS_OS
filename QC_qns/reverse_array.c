//Program to reverse array.
#include<stdio.h>
#define SIZE 100
void reverse(int [],int);
void reverse_ptr(int *,int);
int main()
{
	int array[SIZE],i,n;
	printf("enter the size array:\n");
	scanf("%d",&n);
	printf("enter the elements of array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	//reverse(array,n);
	//reverse_ptr(array,n);
	void (*fp)(int [],int)=reverse;
	fp(array,n);
	void (*fp1)(int [],int)=reverse_ptr;
	fp1(array,n);
}
void reverse(int a[],int n)
{
	int i,j,temp;
	for(i=0,j=n-1;i<j;i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	printf("after reverse the array elements:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
}
void reverse_ptr(int *a,int n)
{
	int i,j,temp;
	for(i=0,j=n-1;i<j;i++,j--)
	{
		temp=*(a+i);
		*(a+i)=*(a+j);
		*(a+j)=temp;
	}
	printf("\nafter reverse  of array elements:\n");
	for(i=0;i<n;i++)
		printf("%d\t",*(a+i));
}
