#include "main.h"

/**
 ***cap_string - function that concat. a string to another one.
 *@s: input. string
 *
 *Return: pointer to string
 */

char *cap_string(char *s)
{
	int ind;
	int counter;

	ind = 0;
	counter = 0;
	while (s[ind] != '\0')
	{
		if (counter == 0)
		{
			if ((s[ind] >= 'a' && s[ind] <= 'z'))
			{
				s[ind] = s[ind] - 32;
			}
			else
				counter++;
		}

		if (s[ind] == '!' || s[ind] == '"' || s[ind] == '(' || s[ind] == ')')
			counter = 0;
		else if (s[ind] == ',' || s[ind] == '.' || s[ind] == '{' || s[ind] == '}')
			counter = 0;
		else if (s[ind] == ';' || s[ind] == '?' || s[ind] == '\n')
			counter = 0;
		else if (s[ind] == '\t')
			counter = 0;
		else if (s[ind] == ' ')
			counter = 0;
		else
			counter++;
		ind++;
	}

	return (s);
}
