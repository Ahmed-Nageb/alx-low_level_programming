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
	int sign = 1;

	for (i = 0; s[i] != '\0'; ++i)
	{
		if (s[i] == ' ')
			continue;
		if (s[i] == '-')
		{
			sign *= -1;
			continue;
		}

		if (s[i] == '+')
		{
			continue;
		}

		res = res * 10 + s[i] - '0';
	}

	return (sign * res);
}
