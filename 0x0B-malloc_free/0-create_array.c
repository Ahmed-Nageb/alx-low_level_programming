#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - prints buffer in hexa
 * @c: the charachter to be filled at memory
 * @size: the size of the memory to allocate
 *
 * Return: address or NULL.
 */

char *create_array(unsigned int size, char c)
{
	char *location;

	if (size == 0)
		return (NULL);

	location = malloc(sizeof(unsigned int) * size);
	if (location != NULL)
	{
		location[size] = '\0';
		while (size)
		{
			location[size - 1] = c;
			size--;
		}
	}
	return (location);
}
