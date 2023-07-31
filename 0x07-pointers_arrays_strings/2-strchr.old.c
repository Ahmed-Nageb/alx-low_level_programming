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
	int iter = 0;

	while (s[iter] != '\0')
	{
		if (s[iter] == c)
		{
			s = &s[iter];
			return (s);
		}
		else
		{
			iter++;
		}
	}

	return (NULL);
}
