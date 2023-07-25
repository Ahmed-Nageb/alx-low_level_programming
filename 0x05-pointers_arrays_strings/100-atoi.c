#include "main.h"

/**
 *_atoi - copies the string pointed to by src,
 *including the terminating null byte (\0),
 *to the buffer pointed to by dest
 *@s: this is the source to copy
 *Return: copy of original source
 */

int _atoi(char *s)
{
	int res = 0;
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	{
		if (str == ' ')
			continue;
		if (str[i] == '-')
		{
			res *= -1;
			continue;
		}

		res = res *10 + s[i] - '0';
	}

	return (res);
}
