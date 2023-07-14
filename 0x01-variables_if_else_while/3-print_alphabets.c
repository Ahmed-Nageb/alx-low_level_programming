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

	chr = 'a';
	while (chr <= 'z')
	{
		putchar(chr);
		chr++;
	}
	chr = 'A';
	while (chr <= 'Z')
	{
		putchar(chr);
		chr++;
	}
	putchar('\n');
	return (0);
}
