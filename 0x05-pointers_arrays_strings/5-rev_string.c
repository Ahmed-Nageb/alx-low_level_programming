#include "main.h"

/**
 *rev_string - function that reverses a string.
 *@s: char to be checked
 *Return: nothing
 */

void rev_string(char *s)
{
	int length;
	char temp;
	int inc;
	int dec;
	int iter;

	length = 0;
	while ((s[length]) != '\0')
	{
		length++;
	}

	inc = 0;
	dec = length - 1;
	iter = (length / 2);

	while (iter)
	{
		temp = s[inc];
		s[inc] = s[dec];
		s[dec] = temp;
		inc++;
		dec--;
		iter--;
	}
}
