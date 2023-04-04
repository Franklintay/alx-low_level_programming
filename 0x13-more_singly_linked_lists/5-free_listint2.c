#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: the head of the list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *follow;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		follow = (*head)->next;
		free(*head);
		*head = follow;
	}
}
