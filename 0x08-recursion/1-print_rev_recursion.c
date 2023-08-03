#include "main.h"

/**
 *_print_rev_recursion - a function that fills memory with a constant byte.
 *@s: the address of memory
 *Return: Nothing.
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		s++;
		_print_rev_recursion(s);
		if (*s == '\n')
			_putchar('\n');
		else
			_putchar(*(s-1));
	}
}
