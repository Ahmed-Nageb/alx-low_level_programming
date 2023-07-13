#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %ld byte(s)\nSize of an int: %ld byte(s)\nSize of a long int: %ld byte(s)\nSize of a long long int: %ld byte(s)\nSize of a float: %ld byte(s)\n", sizeof(char) ,sizeof(int) ,sizeof(long) ,sizeof(long long) ,sizeof(float));
	return (0);
}
