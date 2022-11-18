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
	static char *command, *msg, *line, **buf;
	size_t n = 2048;

	while (1)
	{
		printf("$ ");
		getline(&line, &n, stdin);
		buf = str_split(line, " \n");
		free(line);
		line = NULL;
		command = buf[0];
		if (exec_builtin(command, buf) == -1)
		{
			if (str_starts_with(command, "./"))
				execute(command, buf, environ);
			else
			{
				command = _get_command_path(command);
				if (command)
					execute(command, buf, environ);
				else
				{
					msg = str_build(2, argv[0],  ": No such file or directory\n");
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
