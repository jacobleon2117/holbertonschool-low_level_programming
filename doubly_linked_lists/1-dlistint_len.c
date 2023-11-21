#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - finds the list of a provided doubly linked list
 * @head: start of the list
 * Return: length of the list that follows @head
*/

size_t dlistint_len(const dlistint_t *head)
{
	size_t count = 0;

	while (head != NULL)
	{
		count++;
		head = head->next;
	}
	return (count);
}
