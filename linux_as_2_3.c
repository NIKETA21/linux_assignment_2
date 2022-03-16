//first program to get the command

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char *command;
	command ="pstree";
	
	printf("printing tree type structure of currently running process from calling execl() command\n");
	system(command);
	return 0;
	
}

//second program to execute the command
#include<stdio.h>
#include<unistd.h>
int main()
{
	int fi;
	printf("going to another command\n");
	execl("/home/niketa/linux_as_2_3", "./linux_as_2_3",0);
	printf("i  execute\n");
  return 0;
	
}
