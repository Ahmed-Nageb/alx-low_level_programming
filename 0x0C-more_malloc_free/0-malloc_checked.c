#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *malloc_checked - prints buffer in hexa
 *@b: number of bytes
 *
 *Return: a pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *str;

	str = malloc(b);
	if (str == NULL)
		exit(98);

	return (str);
}
