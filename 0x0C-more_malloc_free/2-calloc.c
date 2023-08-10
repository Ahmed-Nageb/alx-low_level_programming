#include "main.h"
#include <stdlib.h>

/**
 *_calloc - allocate memory for an array
 *@nmemb: number of elements in an array
 *@size: size on the array
 *Return: pointer string
 */

/*****
allocated memory.
The memory is set to zero
If nmemb or size is 0, then _calloc returns NULL
If malloc fails, then _calloc returns NULL
****/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *s, itr;

	if (!nmemb || !size)
		return (NULL);

	s = malloc(sizeof(size) *nmemb);
	if (!s)
		return (NULL);

	for (itr = 0; itr < nmemb; itr++)
	{
		s[itr] = 0;
	}
	return (s);
}
