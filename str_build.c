#include "main.h"

/**
 * str_cat - join two strings together
 * @dest: string
 * @src: string
 * Return: pointer to the concatenated string
 */
char *str_cat(char *dest, char *src)
{
	char *tmp;
	size_t i = 0;

	if ((dest == NULL) || (src == NULL))
		return (NULL);
	tmp = malloc(sizeof(char) * 2048);
	if (tmp == NULL)
		return (NULL);
	while (*dest)
	{
		tmp[i] = *dest;
		dest++;
		i++;
	}
	while (*src)
	{
		tmp[i] = *src;
		src++;
		i++;
	}
	i++;
	tmp[i] = '\0';
	return (tmp);
}

/**
 * str_build - concate 2 or more strings together
 * @n: number of strings to concate
 * Return: string
 */
char *str_build(size_t n, ...)
{
	char *buffer, *tmp = "";
	va_list strings;

	va_start(strings, n);
	while (n > 0)
	{
		buffer = va_arg(strings, char *);
		if (buffer)
			tmp = str_cat(tmp, buffer);
		n--;
	}
	va_end(strings);
	return (tmp);
}
