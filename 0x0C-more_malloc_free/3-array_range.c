#include "main.h"
#include <stdlib.h>

/**
 *array_range -  an array of integers
 *@min: minimum value in array
 *@max: maaximum value in array
 *Return: integer array
 */
int *array_range(int min, int max)
{
	int *str, itr, val;

	if (min > max)
		return (NULL);

	str = malloc(sizeof(int) * (max - min + 1));
	if (!str)
		return (NULL);

	val = min;
	for (itr = 0; itr < (max - min + 1); itr++)
	{
		str[itr] = val;
		val++;
	}

	return (str);
}
