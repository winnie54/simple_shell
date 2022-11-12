#include "main.h"

int i = 0;
pid_t status;
int check = 0;
/**
 */
int main(int argc, char **argv, char **env)
{
	static char **buf;
	static char *line;
	size_t n = 2048;
	char **path = _path();

	while (*path)
	{
		printf("%s\n", *path);
		path++;
	}
	while (1)
	{
		printf("$ ");
		getline(&line, &n, stdin);
		i++;
		buf = str_split(line, " \n");
		check = get_stat(buf[0]);
		if (!check)
		{
			printf("hsh: %d: %s not found\n", i, buf[0]);
		}
		execve(buf[0], buf, env);
		status = fork();
		wait(&status);
	}
	(void)argc;
	(void)argv;
	return (0);
}
