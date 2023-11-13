#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - finds the number of nodes in the singly list
 * @h: pointer to first node in linked list
 * Return: number of nodes
 **/

size_t list_len(const list_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);
}
