#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a linked list and sets the head to NULL
 * @head: double pointer that points to the head of the list
 */

void free_listint2(listint_t **head)

{
	listint_t *current, *tmp;

	if (head == NULL)
		return;

	current = *head;

	while (current != NULL)

	{
	tmp = current;
	current = current->next;
	free(tmp);
	}

	*head = NULL;
}
