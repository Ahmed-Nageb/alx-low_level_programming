#include "main.h"

/**
 * print_alphabet_x10 - Function implementation
 *
 * ASCII 65->90 :Capital letters
 * 	 97->122:Lowercase letters
 * Return: 1 if c is lowercase , 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122 )
		return 1;
	else
		return 0;


}
