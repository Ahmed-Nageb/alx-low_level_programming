#include "main.h"

/**
 * print_last_digit - return the abs value
 * @n: The number to be checked
 *
 * Return: %10 of n
 */

int print_last_digit(int n)
{
	int last;

	last = (n%10);
	_putchar(last + '0');
	return (last);
}
