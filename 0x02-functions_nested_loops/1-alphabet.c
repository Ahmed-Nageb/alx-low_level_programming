#include "1-main.h"

/*
 * print alphbaet
 *
 */

void print_alphabet(void)
{
	unsigned char i;
	for(i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
