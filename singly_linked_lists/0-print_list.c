#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints the data in the singly list
 * @h: points the the first node of the list
 * Return: the number of nodes
**/

size_t print_list(const list_t *head)
{
	size_t count = 0;

	while (head != NULL)
	{
		count++;
		if (head->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", head->len, head->str);
		head = head->next;
	}
	return (count);
}
