#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string whose length to check
 *
 * Return: integer length of string
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * _strcmp - compares two strings.
 * @s1: the first string
 * @s2: the second strang
 *
 * Return: negative if s1 < s2, positive if s1 > s2, zero if s1 == s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 < *s2 ? -1 : 1);
}

/**
 * _strcat - concatenates two strings
 * @dest: the destination buffer
 * @src: the source buffer
 *
 * Return: pointer to destination buffer
 */
char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (ret);
}

/**
 * str_rev - reverse a string
 * @str: string
 * Return: @str reversed
 */
string str_rev(string str)
{
	size_t len, i, j;
	string tmp;

	len = _strlen(str);
	tmp = malloc(sizeof(char) * (len + 1));
	if (!tmp)
		return (NULL);
	j = len;
	for (i = 0; i < len; i++)
	{
		tmp[i] = str[j - 1];
		j--;
	}
	tmp[len] = 0;
	return (tmp);
}
/**
 * itoa - converts interger to string
 * @num: integer
 * Return: string
 */
string itoa(int num)
{
	int reminder, i;
	char sign;
	string str, ret;

	if (num == 0)
		return ("0");
	str = malloc(sizeof(char) * 64);
	if (!str)
		return (NULL);
	i = 0;
	sign = 0;
	if (num < 0)
	{
		sign = '-';
		num *= -1;
	}
	while (num > 0)
	{
		reminder = num % 10;
		num /= 10;
		str[i] = reminder + 48;
		i++;
	}
	if (sign)
	{
		str[i] = sign;
	}
	i++;
	str[i] = 0;
	ret = str_rev(str);
	free(str);
	return (ret);
}
