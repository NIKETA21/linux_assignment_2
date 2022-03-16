#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>
#include<sys/wait.h>
int main(void)
{
	pid_t pid1,pid3, fd1;
	printf("\n my currnet process pid is :%d", getpid());
	pid1 = fork();
	if(pid1==0)
	{
	
		pid3=fork();
		if(pid3==0)
		{
		
			printf("\n i am child2 child's child process \n");
			printf("my process id is %d\n", getpid());
			
		}
		pid1 = wait(0);
		printf("\n i am child1 and my pid is : %d\n", getpid());
		fd1= open("linux.txt",O_WRONLY | O_CREAT | O_TRUNC);
		printf("\n i am opening file and my file descriptor id %d\n", fd1);
		
	}
	int pid2;
	printf("\n parent pid is %d\n", getpid());
	pid2=wait(0);
	printf("\n i am parent with pid :%d \n", getpid());
	return 0;
	
}
