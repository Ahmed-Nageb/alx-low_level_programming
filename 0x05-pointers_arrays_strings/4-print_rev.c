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

	while (*temp_ptr != '\0')
	{
		len++;
		temp_ptr++;
	}

	while (len >= 0)
	{
		_putchar(*(s + len));
		len--;
	}

	_putchar('\n');
}
