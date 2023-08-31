#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: input number
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	char size;
		unsigned long int printbit = 1ul << 63;

	while (!(printbit & n) && printbit != 0)
		printbit = printbit >> 1;

printf("printedbit: %lu\n",printbit);

	size = (sizeof(n) * 8) -1;
	printf("S = %d",size);
	while (size)
	{
		_putchar((n >> size) + '0');
		size = size >> 1 ;
	}
}
