#include "main.h"

/**
 * _strdup - makes a duplicate copy of a string
 * @str: null byte terminated string
 * Return: null byte terminated string on success else null
 */
char *_strdup(char *str)
{
	size_t len = 0, i = 0;
	char *buf;

	if (str == NULL)
		return (NULL);
	len = strlen(str);
	buf = malloc(sizeof(char) * len);
	while (str[i] != '\0')
	{
		buf[i] = str[i];
		i++;
	}
	buf[i] = '\0';
	return (buf);
}
