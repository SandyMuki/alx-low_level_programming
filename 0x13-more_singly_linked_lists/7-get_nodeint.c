#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index(listint_t -  returns the nth node of a linked list
 * @head: first node
 * @index: node's indext that needs to return starting 0
 *
 * Return: pointer to the nth node of a lis or NULL if
 * node doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int counter = 0;
	listint_t *temp;

	temp =  head;

	while (temp != NULL)

	{
		if (counter == index)
			return (temp);
		counter += 1;
		temp = temp->next;
	}

	return (NULL);

}
