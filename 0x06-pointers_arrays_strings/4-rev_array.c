#include "main.h"

/**
 *reverse_array - function that reverses a string.
 *@a: char to be checked
 *@n: the number of elements of the array
 *Return: nothing
 */

void reverse_array(int *a, int n)
{
	int length;
	int temp;
	int inc;
	int dec;
	int iter;

	length = 0;
	while ((a[length]) != '\0')
	{
		length++;
	}

	inc = 0;
	dec = length - 1;
	iter = (length / 2);

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
