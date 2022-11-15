#include  "main.h"

string _get_command_path(string command)
{
	string *path;
	string command_path;
	
	if (!command)
		return (NULL);
	path = set_path();
	while (*path)
	{
		command_path = str_build(3, *path, "/", command);
		if (get_stat(command_path))
			return (command_path);
		path++;
	}
	return (NULL);
}
