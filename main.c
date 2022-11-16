#include "main.h"

int i = 0;
int check = 1;
/**
 */
int main(int argc, char **argv, char **env)
{
	static char **buf;
	static char *line;
	size_t n = 2048;
	static char *command;
	pid_t pid;


	while (1)
	{
		printf("$ ");
		getline(&line, &n, stdin);
		i++;
		buf = str_split(line, " \n");
		free(line);
		line = NULL;
		command = buf[0];
		if (exec_builtin(command, buf) == -1)
		{
			if (str_starts_with(command, "./"))
			{
				execute(command, buf, environ);
			}
			else if((command = _get_command_path(command)))
			{
				execute(command, buf, environ);
			}
			else
			{
				puts("command not found");
			}
		}
	}
	(void)argc;
	(void)argv;
	return (0);
}
