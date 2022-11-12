#include "main.h"

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

