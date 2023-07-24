#include "main.h"

/**
 *puts2 - take a pointer str
 *@str: pointer to str
 *Return: none.
 */

void puts2(char *str)
{
	int counter = 0;

	while (*str != '\0')
	{
		if (counter % 2 == 0)
			_putchar(*str);
		str++;
		counter++;
	}

	_putchar('\n');
}
