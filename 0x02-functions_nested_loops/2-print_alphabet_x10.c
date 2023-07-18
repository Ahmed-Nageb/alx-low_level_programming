#include "main.h"

void print_alphabet_x10(void)
{
	unsigned char i;
	unsigned char counter ;

	counter = 0;
	while (counter <= 10)
	{

		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		counter ++;
	}
}
