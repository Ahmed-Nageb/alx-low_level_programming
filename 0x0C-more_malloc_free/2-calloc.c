#include "main.h"
#include <stdlib.h>

/**
 *_calloc - allocate memory for an array
 *@nmemb: number of elements in an array
 *@size: size on the array
 *Return: pointer string
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int itr;
	char *s;

	if (!nmemb || !size)
		return (NULL);

	s = malloc(sizeof(size) * nmemb);
	if (!s)
		return (NULL);

	for (itr = 0; itr <= nmemb * size; itr++)
	{
		s[itr] = 0;
	}
	return (s);
}
