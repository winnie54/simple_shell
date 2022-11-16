#include  "main.h"

/**
 * set_path - populate path variable
 * Return: array of exeutable paths
 */
char **set_path(void)
{
	char *env_path = _getenv2("PATH");
	char **path = str_split(env_path, ":");

	free(env_path);
	return (path);
}
