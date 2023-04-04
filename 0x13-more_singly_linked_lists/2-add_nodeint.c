#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: the head of the list
 * @n: number of nodes
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *k;

	if (head == NULL)
		return (NULL);
	k = malloc(sizeof(listint_t));
	if (k == NULL)
		return (NULL);
	k->n = n;
	k->next = *head;
	*head = k;
	return (k);
}
