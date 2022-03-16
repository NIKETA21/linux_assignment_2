//first program to provide path to the execl program to run 

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>
#include<sys/wait.h>
int main()
{
	printf("Calling other file using execl to run other  command programm\n");
	execl("/home/niketa/linux", "./linux", 0);
	return 0;
	
	
}

// second program to call the command using command line
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>
#include<sys/wait.h>
int main()
{
	int pid_1, fd1;
	fd1 = open (linux.txt" , O_WRONLY|O_CREAT | O_TRUNC);
        printf("the fd is : %d\n", fd1);
	printf("current process pid :%d\n", getpid());
	return 0;
}
