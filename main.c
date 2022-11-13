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

	do
	{
		printf("$ ");
		getline(&line, &n, stdin);
		i++;
		buf = str_split(line, " \n");
		if(str_starts_with(buf[0], "./"))
		{
			command = buf[0];
		}
		else
		{
			command = str_build(3, "/bin", "/", buf[0]);
		}
		check = get_stat(command);
		if (!check)
		{
			printf("hsh: %d: %s not found\n", i, buf[0]);
			continue;
		}
		else
		{
			execute(command, buf, environ);
		}
		free(line);
		free_str_array(buf);
		buf = NULL;
		line = NULL;
	}
	while (1);
	(void)argc;
	(void)argv;
	return (0);
}
