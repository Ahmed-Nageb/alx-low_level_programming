#include "main.h"

/**
 *leet - encode string into 1337 leet
 *@s: string to manipulate
 *Return: string
 */

char *leet(char *s)
{
	int str1[11] = { 'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L' };

	int str2[11] = { '4', '4', '3', '3', '0', '0', '7', '7', '1', '1' };

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
