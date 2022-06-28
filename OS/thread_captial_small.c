#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
char ch=65;
void *thread_capital(void *ptr)
{
	while(ch>=65&&ch<=90)
	{
	printf("%c\n",ch);
	sleep(1);

	}
}
void *thread_small(void *ptr)
{
	while(ch>=65&&ch<=90)
	{
	printf("%c\n",ch+32);
	ch++;
	sleep(1);
	}
}
int main()
{
	pthread_t thread[2];
	pthread_create(&thread[0],NULL,&thread_capital,NULL);
	pthread_create(&thread[1],NULL,&thread_small,NULL);
	pthread_join(thread[0],NULL);
	pthread_join(thread[1],NULL);
}
