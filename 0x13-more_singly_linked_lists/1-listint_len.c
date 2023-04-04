#include "lists.h"
#include <stddef.h>

/**
 *listint_len - returns the number of elements in the linked list.
 *@h: pointer to head of the linked lists
 *
 * Return: number of elements in the linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	const listint_t *present = h;

	while (present)
	{
		len += 1;
		present = present->next;
	}
	
	return (len);
}
