#include<stdio.h>
#define SIZE 100
void array_reverse(int [],int);
void array_reverse_ptr(int *,int);
int main()
{
	int array[SIZE],n,i;
	printf("enter the size of array\n");
	scanf("%d",&n);
	printf("enter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("the array elemnets are:\n");
	for(i=0;i<n;i++)
		printf("%d\t",array[i]);
	//array_reverse(array,n);
//	void (*fp)(int [],int)=array_reverse;//function declaration and assign
	void (*fp)(int [],int);//declaration 
	fp=array_reverse;//assign
	fp(array,n);//function call
	//array_reverse_ptr(array,n);
	void (*fp1)(int [],int n)=array_reverse_ptr;
	fp1(array,n);
}
void array_reverse(int a[],int n)
{
	int i,j,temp;
	for(i=0,j=n-1;i<j;i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	printf("\nreverse of array elements:\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
}
void array_reverse_ptr(int *a,int n)
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
