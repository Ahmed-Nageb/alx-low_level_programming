#include "main.h"

/**
 * print_numbers - print nums from 0 to 9
 *
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	int number;

	number = 0;
	while (number < 10)
	{
		_putchar('0' +  number);
		number++;
	}
	_putchar('\n');
}
