#include "main.h"

/**
 *_strcmp - function that concat. a string to another one.
 *@s1: first. string
 *@s2: sec. string
 *Return: comp. res.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
		{
			break;
		}

		s1++;
		s2++;
	}

	return (*(char*) s1 - *(char*) s2);
}