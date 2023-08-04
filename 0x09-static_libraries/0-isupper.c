#include "main.h"

/**
 * _isupper - checks for lowercase character
 * @c: The character to be checked
 * ASCII 65->90 :Capital letters
 *	97->122 :Lowercase letters
 * Return: 1 if the number is lowercase , 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
