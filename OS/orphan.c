#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
	pid_t pid;
	pid=fork();
	if(pid>0)
	{
		printf("parent process exicuted suceessfully:%d\n",getpid());
	}
	else if(pid==0)
	{
		sleep(5);
		printf("child process exiecuted suceessfully:%d\n",getpid());
		exit(0);
	}
	else
	{
		printf("child process cannot created suceessfully\n");
	}
}
