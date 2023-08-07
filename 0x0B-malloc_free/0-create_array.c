#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */

char *create_array(unsigned int size, char c)
{
	char *location;

	if (size == 0)
		return (NULL);

	location = malloc(sizeof(size) * size);
	if (location != NULL)
	{
		while (size)
		{
			location[size] = c;
			size--;
		}
	}
	return (location);
}
