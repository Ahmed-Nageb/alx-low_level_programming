#include "main.h"

/**
 *rot13 - check the code for Holberton School students.
 *@s: String to be converted
 *Return: string
 */
char *rot13(char *s)
{
	char str1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char str2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	int iter1, iter2;

	for (iter2 = 0; s[iter2] != '\0'; iter2++)
	{
		for (iter1 = 0; str1[iter1] != '\0'; iter1++)
		{
			if (s[iter2] == str1[iter1])
				s[iter2] = str2[iter1];
		}
	}

	return (s);
}
