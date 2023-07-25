#include "main.h"

/**
 *puts_half - take a pointer str
 *@str: pointer to str
 *Return: none.
 */

void puts_half(char *str)
{
	int length;
	int iter;

	length = 0;
	while ((str[length]) != '\0')
	{
		length++;
	}

	if ((length % 2) == 0)
	{
		iter = (length / 2);

		while (iter < length)
		{
			_putchar(str[iter]);
			iter++;
		}
	}
	else
	{
		iter = ((length - 1) / 2);
        iter = length - iter;
		while (iter < length)
		{
			_putchar(str[iter+1]);
			iter++;
		}
	}

	_putchar('\n');
}
