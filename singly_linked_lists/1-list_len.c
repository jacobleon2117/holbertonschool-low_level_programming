#include "lists.h"
#include <stdio.h>
#include <stdlib.h

/**
 *
 *
 *
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
