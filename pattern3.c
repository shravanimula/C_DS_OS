/*
5
4 4
3 3 3
2 2 2 2
1 1 1 1 1
*/
#include<stdio.h>
int main()
{
	int rows,i,j;
	printf("enter the no.of rows:\n");
	scanf("%d",&rows);
	for(i=rows;i>0;i--,printf("\n"))
	{
		for(j=rows;j>=i;j--)
		{
			printf("%d ",i);
		}
		
	}
}

