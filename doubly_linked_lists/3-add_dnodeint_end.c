#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a new  node to the end of the linked list
 * @head: head of the existing list
 * @num: value to be held in the new node
 * Return: new node
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int num)
{
	dlistint_t *new_node;
	dlistint_t *current;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = num;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
		new_node->prev = current;
	}
		return (new_node);
}
