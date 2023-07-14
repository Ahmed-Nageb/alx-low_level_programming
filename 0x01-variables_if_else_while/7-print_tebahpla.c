#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int chr;

	chr = 'z';
	while (chr >= 'a')
	{
		putchar(chr);
		chr--;
	}
	putchar('\n');
	return (0);
}
