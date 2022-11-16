#include "main.h"

/**
 * main - driver of our program
 * @argc: int
 * @argv: string array
 * @env: string array
 * Return: 0 on success else
 */
int main(int argc, char **argv, __attribute__((unused))char **env)
{
	static char **buf;
	static char *line;
	size_t n = 2048;
	static int i;
	static char *command;
	char *msg;

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
			else
			{
				command = _get_command_path(command);
				if (command)
				{
					execute(command, buf, environ);
				}
				else
				{

					msg = str_build(5, "hsh: ", itoa(i), ": ",  buf[0], ": not found\n");
					_puts(msg);
					free(msg);
				}
				free(command);

			}
		}
		free_str_array(buf);
	}
	(void)argc;
	(void)argv;
	return (0);
}
