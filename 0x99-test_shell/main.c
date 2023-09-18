#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**#include "main.h"**/
/*********
 * 
 * char *strtok(char *str, const char *delim);
 * str represents the string to be tokenize
 * delim represents what can of characters we expect to be separating
 * the string which should be used as a guide to break the string into smaller chunks.
 * 
 * *********/
int main(int ac, char **argv)
{
	/* declaring void variables */
	(void)ac;
	//(void)argv;
	/** to store the address of the buffer holding whatever was typed.**/
	char *lineptr = NULL;
	char *lineptr_cp = NULL;
	const char *delim = " ";
	char *tok;
	int num_toks = 0, iter = 0;
	
	size_t n = 0;		  /** to store the allocated size in bytes.**/
	ssize_t n_char;

	while (1)
	{
		printf("%s", "$ ");
		n_char = getline(&lineptr, &n, stdin);
		/* check if the getline function failed or reached EOF or user use CTRL + D */
		/* Handling CTRL + D */
		if (n_char == -1)
		{
			printf("Exiting...\n");
			free(lineptr); /**NB: The getline function allocates memory dynamically and hence we would have to free the memory by ourselves whether the function execution succeeds or fails.**/
			return (-1);
		}
		/* allocate space for a copy of the lineptr */
		lineptr_cp = malloc(sizeof(char) * n_char);
		if (lineptr_cp== NULL)
		{
			perror("tsh: memory allocation error");
			return (-1);
		}
		/* copy lineptr to lineptr_copy */
		strcpy(lineptr_cp, lineptr);
		//printf("%s\n", lineptr);
	/* split the string (lineptr) into an array of words */
        tok = strtok(lineptr, delim);
		printf("%s\n", tok);

        /* determine how many tokens are there*/
        while (tok != NULL){
            num_toks++;
            tok = strtok(NULL, delim);
			printf("%s\n", tok);
        }
		num_toks++;

		printf("%i\n", num_toks);
		/* Allocate space to hold the array of strings */
		argv = malloc(sizeof(char *) * num_toks);
        /* Store each token in the argv array */
		tok = strtok(lineptr_cp, delim);

        for (iter = 0; tok != NULL; iter++){
            argv[iter] = malloc(sizeof(char) * strlen(tok));
            strcpy(argv[iter], tok);
            tok = strtok(NULL, delim);
        }
        argv[iter] = NULL;

	}

	free(lineptr); /**NB: The getline function allocates memory dynamically and hence we would have to free the memory by ourselves whether the function execution succeeds or fails.**/
	return (0);
}
