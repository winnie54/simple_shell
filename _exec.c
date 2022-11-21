#include "main.h"

/**
 * execute - execute executable
 * @command: path to an executable
 * @args: argument to @command
 * @environs: enviroment variables
 * Return: no return on success else -1
 */
int execute(char *command, char **args, char **environs)
{
	int status, success = 0;
	pid_t pid;

	pid = fork();
	if (pid == 0)
	{
	success = execve(command, args, environs);
	}
	wait(&status);
	return (success);
}
