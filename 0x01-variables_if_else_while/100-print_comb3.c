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
	int firstNum_iteration;
	int secondNum_iteration;

	for (firstNum_iteration = '0'; firstNum_iteration <= '9' ; firstNum_iteration ++)
	{
		for (secondNum_iteration = firstNum_iteration; secondNum_iteration <= '9' ; secondNum_iteration++)
		{
			if(firstNum_iteration != secondNum_iteration)
			{
				putchar(firstNum_iteration);
				putchar(secondNum_iteration);
				if((firstNum_iteration != '8') || (secondNum_iteration != '9') )
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
