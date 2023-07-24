#include "main.h"

/**
 *swap_int - take a pointer to two int as parameter and swap them
 *@a: first input
 *@b: second input
 *Return: nothing.
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
