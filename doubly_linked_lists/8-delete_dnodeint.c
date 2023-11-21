#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the specific node from a list
 * @head: start node of the list
 * @index: node that needs to be deleted
 * Return: 1 on a success or -1 if failure
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = NULL;
	dlistint_t *prev = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	prev = *head;
	while (i < index - 1)
	{
		if (prev == NULL)
			return (-1);
		prev = prev->next;
		i++;
	}
	temp = prev->next;
	if (temp->next != NULL)
	{
		prev->next = temp->next;
		temp->next->prev = prev;
	}
	else
		prev->next = NULL;
	free(temp);
	return (1);
}
