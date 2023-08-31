#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: is pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if there is one or more chars
 * in the string b that is not 0 or 1 b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int iter = 0, number = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[iter])
	{
		if (b[iter] == '1' || b[iter] == '0')
		{
			number = number << 1;
			number |= b[iter] - '0';
			iter++;
		}
		else
		{
			return (0);
		}
	}
	return (number);
}
