#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
#define SIZE 20
int array[SIZE];
void *thread_even(void *ptr)
{
	int i;
	for(i=0;i<=SIZE;i++)
	{
		if(i%2==0)
		{
			sleep(2);
			array[i]=i;
			printf("even=%d\n",array[i]);
		}
	}
}
void *thread_odd(void *ptr)
{
	int i;
	for(i=0;i<=SIZE;i++)
	{
		if(!(i%2==0))
		{
			sleep(2);
			array[i]=i;
			printf("odd=%d\n",array[i]);	
		}
	}
}
int main()
{
	pthread_t thread[2];
	pthread_create(&thread[0],NULL,&thread_even,NULL);
	pthread_create(&thread[1],NULL,&thread_odd,NULL);
	pthread_join(thread[0],NULL);
	pthread_join(thread[1],NULL);
}
