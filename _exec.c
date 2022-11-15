#include "main.h"

int execute(char *command, char **args, char **environs)
{
	int status, success;
	pid_t pid;

	pid = fork();
	if (pid == 0)
	{
	success = execve(command, args, environs);
	}
	wait(&status);
	return (success);
}
