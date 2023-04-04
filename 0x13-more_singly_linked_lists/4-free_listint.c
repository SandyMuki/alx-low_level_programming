#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - freeing a linked list
 * @head: points to the head of the linked list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *current, *temp;

	current = head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
}
