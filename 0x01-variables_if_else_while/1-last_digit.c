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
	/* your code goes there Last digit of 629438752 is 2 and is less than 6 and not 0 */
	int reminder = n % 10;
	if (reminder == 0)
		printf("Last digit of %d is %d zero\n", n, reminder);
	else if (reminder <= 5)
		printf("Last digit of %d is %d is less than 6 and not 0\n", n, reminder);
	else if (reminder > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, reminder);
	return (0);
}
