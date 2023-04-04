#include "lists.h"

/**
 * sum_listint - retuns the sum of all integers in a linked list
 * @head: pointer pointing to the head of the linked list
 *
 * Return: if the list is empty, return 0 else return sum of all values
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr = head;

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;

	}

	return (sum);
}
