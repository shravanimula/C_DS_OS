#include<stdio.h>
#define SIZE 100
void bubble_sort(int [],int);
int main()
{
	int a[SIZE],n,i;
	printf("enter the size of array:\n");
	scanf("%d",&n);
	printf("enter the array of elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("before  sorting the array of elements:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	bubble_sort(a,n);
}
void bubble_sort(int a[],int size)
{
	int i,j,temp;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(a[i] > a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nafter sorting the array elements:\n");
	for(i=0;i<size;i++)
		printf("%d\t",a[i]);
}
/*
size=6
9,3,6,2,7,1
a[i]={9,3,6,2,7,1};
i=0,j=1
9 > 3 true
temp=9
a[0]=3
a[1]=9

{3,9,6,2,7,1}
.....j=2,i=0.....
3 > 6(fail)
{3,9,6,2,7,1}
.....j=3,i=0....
3>2 
temp=3;
a[0]=2;
a[3]=3;
{2,9,6,3,7,1}
........i=0,j=4.....
2 > 7
fail;
.....i=0,j=5.....
2>1
temp=2;
a[0]=1
a[5]=2;
 {1,9,6,3,7,2};
like it goes on
*/
