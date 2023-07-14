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
	int t_iteration;
	int fo_iteration;

	for (f_iteration = '0'; f_iteration <= '9'; f_iteration++)
	{
		for (s_iteration = '0'; s_iteration <= '9'; s_iteration++)
		{
			for (t_iteration = f_iteration; t_iteration <= '9'; t_iteration++)
			{
				for (fo_iteration = s_iteration + 1; fo_iteration <= '9'; fo_iteration++)
				{
					putchar(f_iteration);
					putchar(s_iteration);
					putchar(' ');
					putchar(t_iteration);
					putchar(fo_iteration);

					if (!((f_iteration == '9' && s_iteration == '8') &&
						  (t_iteration == '9' && fo_iteration == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
				fo_iteration = '0';
			}
		}
	}
	putchar('\n');
	return (0);
}
