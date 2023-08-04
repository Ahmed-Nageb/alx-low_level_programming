#include "main.h"

/**
 * _abs - return the abs value
 * @n: The number to be checked
 *
 * Return: abs of n
 */

int _abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}
