#include "main.h"

/**
 * _isalpha - checks for _isalpha character
 * @c: The character to be checked
 * ASCII 65->90 :Capital letters
 *	97->122 :Lowercase letters
 * Return: 1 if the number is letter , 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);


}
