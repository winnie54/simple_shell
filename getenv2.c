#include "main.h"

string _getenv2(string name)
{
	size_t i = 0;
	string *env, buf = NULL;

	while (environ[i] != NULL)
	{
		if (str_starts_with(environ[i], name))
		{
			env = str_split(environ[i], "=");
			buf = _strdup(env[1]);
			free_str_array(env);
		}
		i++;
	}
	return (buf);
}
