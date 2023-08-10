#include "main.h"

/**
 *_strdup - concatenates two strings
 *@str: number of characters to be copied
 *Return: a pointer to a new str which is a duplicate str,NULL if str = NULL
 */

char *_strdup(char *str)
{
	int len, counter;
	char *s;

	len = 0;
	counter = 0;
	while (str[len])
		len++;

	if (!len)
		return (0);

	s = malloc(len + 1);
	if (!s)
		return (0);

	while (counter < len)
	{
		s[counter] = str[counter];
		counter++;
	}

	return (s);
}
