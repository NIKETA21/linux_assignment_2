#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>
#include<sys/wait.h>
char *command;
void call1()
{
	printf("calling call1 function\n");
	command ="date";
	printf("printing date and time");
	system(command);
	
}
void call2()
{
	
	printf("calling call2 function\n");
	command ="pwd";
	printf("printing date and time");
	system(command);
}

void call3()
{
	
	printf("calling call3 function\n");
	command ="date";
	printf("printing date and time");
	system(command);
}
int main()
{
	printf("registring call1 function \n");
	atexit(call1);
	printf("registring call2 function \n");
	atexit(call2);
	printf("registring call3 function \n");
	atexit(call3);
	printf("exiting\n");
	exit(0);
}
