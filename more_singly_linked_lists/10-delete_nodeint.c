#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - removes a node at index
 * @head: points to first node
 * @index: points in the list where node is removed
 * Return: 1 returned on success and -1 to fail
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *ptr2;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
		return (1);
	}
	ptr = *head;
	while (i < index - 1)
	{
		if (ptr == NULL)
		{
			return (-1);
		}
		ptr = ptr->next;
		i++;
	}
	ptr2 = ptr->next;
	if (ptr2->next != NULL)
	{
		ptr->next = ptr2->next;
	}
	else
	{
		ptr->next = NULL;
	}
	free(ptr2);
	return (1);
}
