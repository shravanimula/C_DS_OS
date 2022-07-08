#include<stdio.h>
int fibonacci(int);
int main()
{ 
	int num, i; 
	printf("Enter the number:\n"); 
	scanf("%d",&num); 
	printf("fibonacci series is : \n");
	for(i=0;i<num;i++)
	{ 
		printf("%d ",fibonacci(i));
	}
} 
int fibonacci(int i)
{ 
	if(i==0) return 0; 
	else if(i==1) return 1; 
	else return (fibonacci(i-1)+fibonacci(i-2));
} 
