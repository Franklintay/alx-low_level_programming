#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: the head of the list
 * @idx: the index of the list where the new node should be added
 * @n: the number of nides
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int k;
	listint_t *initial, *begin;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		initial = *head;
		for (k = 1; k <= idx - 1 && initial != NULL; k++)
		{
			initial = initial->next;
		}
		if (initial == NULL)
			return (NULL);
	}
	begin = malloc(sizeof(listint_t));
	if (begin == NULL)
		return (NULL);
	begin->n = n;
	if (idx == 0)
	{
		begin->next = *head;
		*head = begin;
		return (begin);
	}
	begin->next = initial->next;
	initial->next = begin;
	return (begin);
}
