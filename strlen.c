#include "main.h"

size_t _strlen(char *str)
{
	size_t len = 0;
	if (!str)
		return (0);
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}
