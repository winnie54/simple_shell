#include "main.h"

/**
 * str_array_len - find the number of strings in a string array
 * @str_array: null terminated array of strings
 * Return: number of strings in str_array
 */
size_t str_array_len(char **str_array)
{
	size_t len = 0;

	while (*str_array != NULL)
	{
		len++;
		str_array++;
	}
	return (len);
}
