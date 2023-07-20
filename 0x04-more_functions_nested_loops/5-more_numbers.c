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

	number = 0;
	counter = 0;
	while (number <= 14 && counter < 10)
	{
		if (number <= 9)
		{
			_putchar('0' +  number);
			number++;
		}
		else
		{
			_putchar('1');
			_putchar('0' + number-10);
			number++;


		}
		if(number == 15)
		{
			counter++;
			number = 0;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
