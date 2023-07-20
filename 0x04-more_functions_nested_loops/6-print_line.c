#include "main.h"

/**
 * print_line - lines
 * @n: number of '-'
 * 
 * Return: (Success)
 */

void print_line(int n)
{
	int counter;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (counter = 0; counter < n; counter++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
