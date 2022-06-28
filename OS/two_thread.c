#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
void *thread_handler1(void *ptr)
{
	for(int i=0;i<5;i++)
	{
		sleep(1);
		printf("thread1 is running\n");
		printf("thread1 msg:%s\n",(char *) ptr);
		printf("thread1 id=%lu\n",pthread_self());
	}
}
void *thread_handler2(void *ptr)
{
	for(int i=0;i<5;i++)
	{
		sleep(1);
		printf("thread2 is running\n");
		printf("thread2 msg:%s\n",(char *)ptr);
		printf("thread2 id=%lu\n",pthread_self());
	}
}
int main()
{
	pthread_t thread[2];
	void *msg1="THUNDERSOFT";
	void *msg2="INDIA";
	pthread_create(&thread[0],NULL,&thread_handler1,(void *)msg1);
	pthread_create(&thread[1],NULL,&thread_handler2,(void *)msg2);
	pthread_join(thread[0],NULL);
	pthread_join(thread[1],NULL);
}
