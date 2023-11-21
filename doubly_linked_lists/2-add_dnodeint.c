#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint - adds a new node to the beginning of the doubly linked list
 * @head: head of the existing list
 * @num: int held in the new node
 * Return: new node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int num)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = num;
	if (*head == NULL)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		new_node->next = *head;
		new_node->prev = NULL;
		(*head)->prev = new_node;
		*head = new_node;
	}

	return (new_node);
}
