#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - frees a mallocd list
 * @head: points to first node in list
 **/

void free_listint2(listint_t **head)
{
	listint_t *ptr, *new_node;

	new_node = NULL;

	if (head == NULL)
	{
		return;
	}
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
		{
			new_node = ptr;
			ptr = ptr->next;
			free(new_node);
		}
		free(ptr);
	}
	*head = NULL;
	free(*head);
}
