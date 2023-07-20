#include "main.h"

/**
 * print_most_numbers - print nums from 0 to 9
 *
 * Return: (Success)
 */

void print_most_numbers(void)
{
	int number;

	number = 0;
	while (number < 10)
	{
		if (number == 2 || number == 4)
			continue;
		_putchar('0' +  number);
		number++;
	}
	_putchar('\n');
}
