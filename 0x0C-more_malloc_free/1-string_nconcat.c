#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *string_nconcat - concatenates two strings
 *@s1: destination string
 *@s2: source string
 *@n: number of characters to be copied
 *Return: copied
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len, len2, counter, counter2;
	char *s;

	len = 0;
	len2 = 0;
	counter = 0;
	counter2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len])
		len++;
	while (s2[len2])
		len2++;

	if (n >= len2)
		n = len2;

	s = malloc(sizeof(char) * len + n + 1);
	if (!s)
		return (0);

	while (s1[counter] != '\0')
	{
		s[counter] = s1[counter];
		counter++;
	}

	while (s2[counter2] != '\0' && counter2 <= n)
	{
		s[counter] = s2[counter2];
		counter++;
		counter2++;
	}

	s[len + n] = '\0';

	return (s);
}
