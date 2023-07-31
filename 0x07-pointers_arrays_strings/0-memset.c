/**
 **_memset - a function that fills memory with a constant byte.
 *@s: the address of memory
 *@b: constant byte 
 *@n: number of bytes
 *Return: Nothing.
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}

	return (s);
}
