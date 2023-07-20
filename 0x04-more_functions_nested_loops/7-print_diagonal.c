#include "main.h"

/**
 * print_diagonal - print the character '\' n times to draw a line
 * @n: number of '\'
 */

void print_diagonal(int n)
{
	int counter;
	int spaces;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (counter = 0; counter < n; counter++)
		{
			spaces = counter;
			while(spaces)
			{
				_putchar(' ');
				spaces--;
			}
			_putchar('\\');
			_putchar('\n');
		}
		_putchar('\n');
	}
}
