#include "main.h"

/**
 * _strtok - splits string into tokens
 * @str: a null byte terminated string
 * @tok: a null terminated byte string
 * Return: pointer to first token from @str
 * Description: _strtok works by going through str until it finds
 * a char that is equal to any char in tok. Then it returns array
 * consisting of all chars before the condition was met. Subsequent
 * call to _strtok with the same str will return the next token until
 * no token is found, then it returns NULL
 */
char *_strtok(char *str, char *tok)
{
	static int i;
	int j = 0;
	static char s[1024];

	if (str[i] == '\0')
	{
		i = 0;
		return (NULL);
	}
	while (str[i] != '\0')
	{
		if (_strchr(tok, str[i]))
		{
			i++;
			break;
		}
		s[j] = str[i];
		i++;
		j++;
	}
	s[j] = '\0';
	return (s);
}

/**
 * str_split - splits string into a null terminated string array
 * @src: null byte terminated string
 * @tok: null byte teminated string consisting of chars that will
 * be used to split src
 * Return: null terminated string array on success else NULL
 */
char **str_split(char *src, char *tok)
{
	size_t len = 0, i = 0;
	char **dest;
	char *buffer;

	while (src[i] != '\0')
	{
		if (_strchr(tok, src[i]))
			len++;
		i++;
	}
	i = 0;
	dest = malloc(sizeof(char *) * (len + 1));
	if (dest == NULL)
		return (NULL);
	buffer = _strtok(src, tok);
	while (buffer != NULL)
	{
		dest[i] = _strdup(buffer);
		i++;
		buffer = _strtok(src, tok);
	}
	dest[i] = NULL;
	return (dest);
}

/**
 * _strchr - find if a string contain a particular char
 * @str: null byte terminated string
 * @c: char
 * Return: 1 on if c is contained in str else 0
 */
boolean _strchr(char *str, char c)
{
	size_t i = 0;

	if (!str)
		return (0);
	while (str[i] != '\0')
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}
