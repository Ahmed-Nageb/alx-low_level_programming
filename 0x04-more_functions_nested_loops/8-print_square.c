#include "main.h"

/**
 * print_square - print the character '\' n times to draw a line
 * @size: number of '\'
 */

void print_square(int size)
{
	int cols;
	int rows;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (rows = 0; rows < size; rows++)
		{
			cols = size;
			while (cols)
			{
				_putchar('#');
				cols--;
			}
			_putchar('\n');
		}
	}
}
