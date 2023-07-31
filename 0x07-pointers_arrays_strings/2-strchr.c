#include "main.h"

/**
 **_strchr - a function that copies memory area.
 *@dest: the address of memory that will copy to
 *@src: the address of memory that will copy from
 *@n: number of bytes
 *Return: Nothing.
 */

char *_strchr(char *s, char c)
{
	int iter = 0;

	while (s[iter] != '\0')
	{
		if (s[iter] == c)
		{
			s = &s[iter];
			return (s);
		}
		else
		{
			iter++;
		}
	}

	return (0);
}
