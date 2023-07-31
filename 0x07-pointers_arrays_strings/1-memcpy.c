/**
 **_memcpy - a function that fills memory with a constant byte.
 *@dest: the address of memory that will copy to
 *@src: the address of memory that will copy from
 *@n: number of bytes
 *Return: Nothing.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n)
	{
		dest[n - 1] = src[n - 1];
		n--;
	}

	return (dest);
}
