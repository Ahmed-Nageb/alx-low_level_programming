#include "main.h"

/**
 *_strncat - function that concat. a string to another one.
 *@dest: dest. string
 *@src: src. string
 *@n : number of characters
 *Return: dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int length;
	int index;

	length = 0;
	index = 0;
	while ((dest[length]) != '\0')
	{
		length++;
	}

	while (src[index] != '\0' && index < n)
	{
		dest[length] = src[index];
		length++;
		index++;
	}

	dest[length] = '\0';
	return (dest);
}
