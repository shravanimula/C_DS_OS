#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
void *thread_handler(void *ptr)
{
	for(int i=0;i<=5;i++)
	{
		sleep(1);
		printf("thread running\n");
		printf("thread id=%lu\n",pthread_self());
	}
}
int main()
{
	pthread_t thread;
	pthread_create(&thread,NULL,&thread_handler,NULL);
	pthread_join(thread,NULL);
}
