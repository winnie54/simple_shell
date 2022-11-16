#include "main.h"

/**
 *_puts - prints an input string
 *@str: the string to be printed
 *
 * Return: number of bytes written
 */
int _puts(char *str)
{
	int len;

	if (!str)
		return (0);
	len = _strlen(str);
	return (write(1, str, len));
}


/**
 * _strcpy - Copie Source To Destination Char
 * @dest:Destination
 * @src:Source
 * Return: Copie Of Char *
 */
char *_strcpy(char *dest, char *src)
{
int i;

i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
dest[i] = '\0';
return (dest);
}
