#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: the head of the list
 * @n: number of nodes
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *fin;
	listint_t *initial;

	if (head == NULL)
		return (NULL);
	fin = malloc(sizeof(listint_t));
	if (fin == NULL)
		return (NULL);
	fin->n = n;
	fin->next = NULL;
	if (*head == NULL)
	{
		*head = fin;
		return (fin);
	}
	initial = *head;
	while (initial->next != NULL)
	{
		initial = initial->next;
	}
	initial->next = fin;
	return (fin);
}
