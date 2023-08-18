#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - free a dlistint_t list.
 * @head: pointer to the beginning of the linked list
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	if (head != NULL)
	return;	

	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}

