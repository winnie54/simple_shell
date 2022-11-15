#include "main.h"

int execute(char *command, char **args, char **environs)
{
	int status;
	pid_t pid;

	pid = fork();
	if (pid == 0)
	{
	execve(command, args, environs);
	}
	wait(&status);
	return (1);
}
