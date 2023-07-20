#include "main.h"

/**
 * more_numbers - print nums from 0 to 14 *10
 *
 * Return: (Success)
 */

void more_numbers(void)
{
	int number;
	int counter;

	for (counter = 0; counter < 10; counter++)
	{
		for (number = 0; number <= 14; number++)
		{
			if (number / 10 > 0)
				_putchar('1');
			_putchar((number % 10) + '0');
		}
		_putchar('\n');
	}
}
