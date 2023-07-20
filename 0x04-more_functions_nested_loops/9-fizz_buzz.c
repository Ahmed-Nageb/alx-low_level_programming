#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	int counter;

	for (counter = 1; counter <= 100; counter++)
	{
		if (counter != 1)
			printf(" ");
		if (counter % 15 == 0)
			printf("FizzBuzz");
		else if (counter % 3 == 0)
			printf("Fizz");
		else if (counter % 5 == 0)
			printf("Buzz");
		else
			printf("%d ", counter);
	}
	printf("\n");
	return (0);
}
