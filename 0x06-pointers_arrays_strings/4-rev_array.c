#include "main.h"

/**
 *reverse_array - function that reverses a string.
 * @a : char to be checked
 * @n : the number of elements of the array
 *Return: nothing
 */

void reverse_array(int *a, int n)
{
	int temp;
	int inc;
	int dec;
	int iter;

	inc = 0;
	dec = n - 1;
	iter = (n / 2);

	while (iter)
	{
		temp = a[inc];
		a[inc] = a[dec];
		a[dec] = temp;
		inc++;
		dec--;
		iter--;
	}
}
