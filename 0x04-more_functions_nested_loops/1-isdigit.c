#include "main.h"

/**
 * _isdigit - checks if the input is digit
 * @c: The first to be checked
 * Return: 1 if the number is digit , 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
