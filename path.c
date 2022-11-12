#include  "main.h"

char **_path(void)
{
	char *env_path = _getenv2("PATH");
	char **path = str_split(env_path, ":");
	return (path);
}
