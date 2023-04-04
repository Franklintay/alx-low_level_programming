#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: the head of the list
 * @index: the index of the node
 * Return: nth node otherwise Null.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k;

	if (head == NULL)
		return (NULL);
	for (k = 1; k <= index; k++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
