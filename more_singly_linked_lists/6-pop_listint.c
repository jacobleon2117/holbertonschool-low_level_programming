#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - deletes head node of a list
 * @head: points to first node in list
 * Return: head nodes data or 0 if it's empty
 **/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	data = temp->n;
	(*head) = (*head)->next;
	free(temp);
	return (data);
}
