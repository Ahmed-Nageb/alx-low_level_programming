#include "main.h"
#include <stdio.h>

/**
 **_strchr - a function that copies memory area.
 *@s: the address of memory that will search inside
 *@c: char to find its location
 *Return: *s.
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		else
		{
			s++;
		}
	}

	return (NULL);
}
