#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */

char *str_concat(char *s1, char *s2)
{
	char *dup;
	unsigned int i, j, len1, len2;

	i = 0;
	j = 0;
	len1 = 0;
	len2 = 0;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	while (s1[len1])
		len1++;

	while (s2[len2])
		len2++;

	dup = malloc(sizeof(char) * (len1 + len2 + 1));

	if (dup == NULL)
		return (NULL);

	while ((dup[i] = s1[i]) != '\0')
		i++;


	while ((dup[i] = s2[j]) != '\0')
	{
		i++;
		j++;
	}

	dup[i] = '\0';
	return (dup);
}
