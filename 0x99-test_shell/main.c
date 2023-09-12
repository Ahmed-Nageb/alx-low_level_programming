#include <stdio.h>
#include <stdlib.h>

/**#include "main.h"**/

int main(int ac, char **argv){
	  /* declaring void variables */
	(void)ac; (void)argv;

	char *lineptr;	/** to store the address of the buffer holding whatever was typed.**/
	size_t n = 0;	/** to store the allocated size in bytes.**/
	printf("%s", "$ ");
	getline(&lineptr, &n, stdin);
	printf("%s\n", lineptr);
	
	free(lineptr);	/**NB: The getline function allocates memory dynamically and hence we would have to free the memory by ourselves whether the function execution succeeds or fails.**/
	return (0);
}

