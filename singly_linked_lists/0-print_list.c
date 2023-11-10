#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints all the information/data of the node in the lists.
 * @head: The start of thr list.
 *
 * Return: the length of the full list.
**/

size_t print_list(const list_t *h)
{
	size_t count = 0;
	
	while (h != NULL)
	{
		count++;
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else 
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (count);	
}	
