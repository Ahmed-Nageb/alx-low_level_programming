#include "main.h"

/**
 **string_toupper - function that concat. a string to another one.
 *@s: input. string
 *
 *Return: string
 */
char *string_toupper(char *s)
{
	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
		{
			*s = *s - ' ';
		}

		s++;
	}

	return (s);
}
