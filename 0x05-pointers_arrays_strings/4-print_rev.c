#include "main.h"

/**
 *_puts - take a pointer str
 *@s: pointer to str
 *Return: none.
 */

void print_rev(char *s)
{
	int len = 0;
	char *temp_ptr;

	temp_ptr = s;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	while (len >= 0)
	{
		_putchar(*(temp_ptr + len));
		len--;
	}

	_putchar('\n');
}
