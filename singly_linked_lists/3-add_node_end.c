#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h

/**
 * add_node_end - adds a node at the very end of the singly linked list
 * @head: pointer for the first node
 * @str: the string in the list
 * Return: the address of the new node or uses NULL
**/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *ptr;
	
	new_node = malloc(sizeof(list_t));
	ptr = malloc(sizeof(list_t));
	if (new_node)
	{
		new_node->str = strdup(str);
		new_node->len = strlen(str);
		new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		ptr = *head;
		while (ptr = ptr != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = new_node;
	}
	return (new_node);
 
 }
 return (NULL);
}
