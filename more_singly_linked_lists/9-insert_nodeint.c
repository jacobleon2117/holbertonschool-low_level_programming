#iinclude "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - implementon of a new node at the given position
 * @head: points to first node in list
 * @idx: position at which node is added
 * @n: data of node
 * Return: address of new node, or NULL
 **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *ptr2;
	unsigned int i = 0;

	ptr = *head;
	ptr2 = malloc(sizeof(listint_t));

	if (!ptr2)
	{
		return (NULL);
	}
	ptr2->n = n;
	ptr2->next = NULL;
	if (idx == 0)
	{
		ptr2->next = ptr;
		*head = ptr2;
		return (ptr2);
	}

	while (i < idx - 1)
	{
		if (ptr == NULL)
		{
			return (NULL);
		}
		ptr = ptr->next;
		i++;
	}
	ptr2->next = ptr->next;
	ptr->next = ptr2;
	return (ptr2);
}
