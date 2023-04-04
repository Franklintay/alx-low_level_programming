#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - the sum of all the data (n) of a listint_t linked list.
 * @head: the head of the list
 * Return: the sum otherwise if empty 0
 */

int sum_listint(listint_t *head)
{
	int result = 0;

	while (head != NULL)
	{
		result += head->n;
		head = head->next;
	}
	return (result);
}
