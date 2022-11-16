#include "main.h"

/**
 * free_str_array - free string array
 * @str_array: null terminated array string
 */
void free_str_array(char **str_array)
{
	unsigned int i = 0;

	if (str_array == NULL)
		return;
	while (str_array[i] != NULL)
	{
		free(str_array[i]);
		i++;
	}
	free(str_array);
}

