#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>
#include<sys/wait.h>

int main()
{
	int fd , len;
	char w_buf[50]="hi  i am niketa dubey, who are you\n ";
	char r_buf[50];
	int res;
	pid_t pid;
	printf("current process id :%d\n", getpid());
	pid=fork();
	if (pid==0)
	{
		printf("i am child with pid :%d\n and parent pid is : %d\n", getpid(),getppid());
		fd=open("file.txt", O_CREAT | O_RDWR,0777);
		len=write(fd, w_buf,50);
		printf("returned value from buffer : %d\n",len);
		lseek(fd,0,SEEK_SET);
		read(fd,r_buf,len);
		printf("data from buffer: %s\n", r_buf);
		close(fd);
	}
	int pid1;
	printf("i am parent with pid :%d and my ppid is: %d\n",getpid(), getppid());
	printf("i am to wait \n");
	pid1=wait(0);
	printf("after wait state my child executes and then i am priorites this line\n");
	return 0;
}
