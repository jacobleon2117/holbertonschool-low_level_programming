#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the node it's looking for.
 * @head: points to first node in list
 * @index: node to be returned
 * Return: the node it's looking for  or NULL
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	ptr = head;
	while (ptr != NULL)
	{
		if (i == index)
		{
			return (ptr);
		}
		i++;
		ptr = ptr->next;
	}
	return (NULL);
}
