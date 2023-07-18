#include "main.h"

/**
 * print_alphabet_x10 - Function implementation
 *
 * Return: print _ alphabet charachters 10 times when its called
 */

void print_alphabet_x10(void)
{
	unsigned char i;
	unsigned char counter;

	counter = 0;
	while (counter < 10)
	{

		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		counter++;
	}
}
