#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>
#include<sys/wait.h>
int main()
{
	pid_t pid;
	printf("my currnet process id is :%d\n", getpid());
	pid=fork();
	if(pid == 0)
	{
		printf("hi!  run ls -l command\n");
		printf("and i am child of my parent and my pid is :%d\n", getpid());
		execl("/bin/ls", "-l", "twochild.c",0);
		
	}
	
	int pid1;
	printf("i am prents but going to wait for child to execute ..\n");
	pid1 = wait(0);
	printf("i am executing after the child \n");
	return 0;
	
}
