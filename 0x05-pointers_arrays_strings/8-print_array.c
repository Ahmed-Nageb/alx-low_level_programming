#include "main.h"

/**
 *print_array - take a pointer str
 *@a: pointer to str
 *@n : number of elements
 *Return: none.
 */

void print_array(int *a, int n)
{
	int iter;

	for (iter = 0; iter < n; iter++)
	{
		if (iter != (n - 1))
		{
			_putchar(a[iter]);
			_putchar(',');
			_putchar(' ');
		}
		else
			_putchar(a[iter]);
	}

	_putchar('\n');
}
