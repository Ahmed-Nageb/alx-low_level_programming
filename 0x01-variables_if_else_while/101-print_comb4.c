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

	/*Code*/	
	for (f_iteration = '0'; f_iteration <= '9' ; f_iteration++)
	{
		for (s_iteration = f_iteration; s_iteration <= '9' ; s_iteration++)
		{
			for (t_iteration = s_iteration; t_iteration <= '9'; t_iteration++)
			{
				if (f_iteration != s_iteration && t_iteration != s_iteration)
				{
					putchar(f_iteration);
					putchar(s_iteration);
					putchar(t_iteration);
					if ((f_iteration != '7') || (s_iteration != '8'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
