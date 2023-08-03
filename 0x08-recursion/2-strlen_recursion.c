#include "main.h"

/**
 *_strlen_recursion - a function that fills memory with a constant byte.
 *@s: the address of memory
 *Return: Nothing.
 */

int _strlen_recursion(char *s)
{
	int num = 0;
	if (*s)
	{
		s++;
		num = _strlen_recursion(s);
		num++;
	}

	return (num);
}
