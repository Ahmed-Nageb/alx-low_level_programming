#include "main.h"

/**
 ** string_toupper - function that concat. a string to another one.
 * @s: input. string
 *
 * Return: pointer to string
 */
char *string_toupper(char *s)
{
	int index;

	index = 0;
	while (s[index])
	{
		if (s[index] >= 'a' && s[index] <= 'z')
		{
			s[index] = s[index] - 32;
		}

		index++;
	}

	return (s);
}
