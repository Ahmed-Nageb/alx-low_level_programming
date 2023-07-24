#include "main.h"

/**
 *_puts - take a pointer str
 *@str: pointer to str
 *Return: none.
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}
