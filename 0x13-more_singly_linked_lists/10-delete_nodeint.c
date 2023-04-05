#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of list.
 * @head: the head of the list
 * @index: the index of the node that should be deleted.
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int k;
	listint_t *initial, *follow;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		follow = (*head)->next;
		free(*head);
		*head = follow;
		return (1);
	}
	initial = *head;
	for (k = 1; k <= index - 1; k++)
	{
		if (initial->next == NULL)
			return (-1);
		initial = initial->next;
	}
	follow = initial->next;
	initial->next = follow->next;
	free(follow);
	return (1);
}
