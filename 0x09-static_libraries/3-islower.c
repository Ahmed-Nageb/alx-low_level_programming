#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: The character to be checked
 * ASCII 65->90 :Capital letters
 *	97->122 :Lowercase letters
 * Return: 1 if the number is lowercase , 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);


}
