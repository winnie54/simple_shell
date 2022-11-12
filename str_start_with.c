#include "main.h"

/**
 * str_starts_with - find if a string start with a particular set of chars
 * @str: null byte terminated string
 * @tok: null byte terminated string
 * Return: 1 if str starts with tok else 0
 */
boolean str_starts_with(string str, string tok)
{
	size_t i = 0;
	boolean t = 0;

	if ((str == NULL) || (tok == NULL))
		return (0);
	while (tok[i])
	{
		if (!str[i])
		{
			t = 0;
			break;
		}
		if (tok[i] != str[i])
		{
			t = 0;
			break;
		}
		t = 1;
		i++;
	}
	return (t);

}
