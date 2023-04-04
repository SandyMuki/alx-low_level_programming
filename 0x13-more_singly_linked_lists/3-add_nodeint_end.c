#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - add a new node at the end of the list
 * @head: double pointer that points to the head
 * @n: value of the new node
 *
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_element;
	listint_t *last_element = *head;

	new_element = malloc(sizeof(listint_t));

	if (new_element == NULL)
		return (NULL);

	new_element->n = n;
	new_element->next = NULL;

	if (*head == NULL)
	{
		*head = new_element;
	}
	else
	{
		last_element = *head;

		while (last_element->next != NULL)
			last_element = last_element->next;
		last_element->next = new_element;
	}

	return (new_element);
}
