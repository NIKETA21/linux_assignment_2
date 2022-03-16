//first program
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>
#include<sys/wait.h>
int main()
{
	printf("Calling other file using execl to run other  command programm\n");
	execl("/home/niketa/linux_as_2_2_2", "./linux_as_2_2_2", 0);
	return 0;
	
	
}
//second program 
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>
#include<sys/wait.h>
int main()
{
	char com[20];
	printf("think which command line program you want to execute \n");
	printf("ex. ls, pwd, whoami, date, and more\n");
	gets(com);
	system(com);
	return 0;
}
