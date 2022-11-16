#include "main.h"

/**
 * get_stat - check for execute permission for a path
 * @path: path of the file to check
 * Return: 1 if @path is executable else 0
 */
int get_stat(string path)
{
	struct stat file_stat;
	int i;
	mode_t file_mode;

	i = stat(path, &file_stat);
	if (i == -1)
		return (0);
	file_mode = file_stat.st_mode;
	if (file_mode & X_OK)
		return (1);
	return (0);
}
