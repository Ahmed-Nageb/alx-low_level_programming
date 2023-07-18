#include "1-main.h"

/**
 * print_alphabet - Function implementation
 *
 * Return: print_alphabet charachters when its called 
 */

void print_alphabet(void)
{
	unsigned char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
