#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - delete the head node in a linked list
 * @head: pointer to the first node in the linked list
 *
 * Return: head node's data(n) or 0 if linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int number;
	
	if (head == NULL || *head == NULL)
		return (0);

	number = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (number);

}
