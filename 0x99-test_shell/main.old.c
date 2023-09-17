#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**#include "main.h"**/

int main(int ac, char **argv)
{
	/* declaring void variables */
	(void)ac;
       	(void)argv;

	char *lineptr;	/** to store the address of the buffer holding whatever was typed.**/
	size_t n = 0;	/** to store the allocated size in bytes.**/
	ssize_t n_char;
	while (1)
	{
		printf("%s", "$ ");
		n_char = getline(&lineptr, &n, stdin);
		      /* check if the getline function failed or reached EOF or user use CTRL + D */ 
		if (n_char == -1)
		{
			printf("Exiting...\n");
			return (-1);
		}
		printf("%s\n", lineptr);
		free(lineptr);	/**NB: The getline function allocates memory dynamically and hence we would have to free the memory by ourselves whether the function execution succeeds or fails.**/
	}
	return (0);
}

