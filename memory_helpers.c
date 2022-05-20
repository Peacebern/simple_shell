#include "shell.h"

/**
 * free_array - free an array of strings
 * @array: array to free
 */

void free_array(char **array)
{
	size_t i = 0;

	while(array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);

}
