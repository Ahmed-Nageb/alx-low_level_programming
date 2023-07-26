#include "main.h"

/**
 *_strlen - take a pointer str
 *@s: pointer to str
 *Return: length.
 */

int _strlen(char *s)
{
	int counter = 0;

	while (*s != '\0')
	{
		counter++;
		s++;
	}

	return (counter);
}
