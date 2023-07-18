#include "main.h"

/**
 * print_last_digit - return the abs value
 * @n: The number to be checked
 *
 * Return: %10 of n
 */

int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;
	_putchar((n % 10) + '0');
	return (n % 10);
}
