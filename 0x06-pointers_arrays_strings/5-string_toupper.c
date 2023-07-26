#include "main.h"

/**
 ** string_toupper - function that concat. a string to another one.
 * @s: input. string
 *
 * Return: pointer to string
 */
char *string_toupper(char *s)
{
	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
		{
			*s = *s - 32;
		}

		s++;
	}

	return (s);
}
