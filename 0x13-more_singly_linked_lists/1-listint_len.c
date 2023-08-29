#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 *listint_len - prints a listint with newlines between
 *each node's value
 *
 *@h: head of list to print
 *
 *Return: length of list
 */

size_t listint_len(const listint_t *h)
{
	size_t len;

	if (h == NULL)
		return (0);

	for (len = 0; h != NULL; h = h->next, len++)
	return (len);
}
