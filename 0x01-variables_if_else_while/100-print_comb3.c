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
	int f_iteration;
	int s_iteration;

	for (f_iteration = '0'; f_iteration <= '9' ; f_iteration++)
	{
		for (s_iteration = f_iteration; s_iteration <= '9' ; s_iteration++)
		{
			if (f_iteration != s_iteration)
			{
				putchar(f_iteration);
				putchar(s_iteration);
				if ((f_iteration != '8') || (s_iteration != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
