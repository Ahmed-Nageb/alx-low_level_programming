#include "main.h"

/**
 *_strncpy - function that concat. a string to another one.
 *@dest: dest. string
 *@src: src. string
 *@n : number of characters
 *Return: dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index;

	index = 0;

	while (src[index] != '\0' && index < n)
	{
		dest[index] = src[index];
		index++;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}
