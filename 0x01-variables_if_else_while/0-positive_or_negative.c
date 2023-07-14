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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (0 == n)
		printf("%d is zero\n", n);
	else if (1 < n)
		printf("%d is positive\n", n);
	else if (1 > n)
		printf("%d is negative\n", n);
	return (0);
}
