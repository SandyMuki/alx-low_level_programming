#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @index: index starting from 0 of the bit you want to set
 * @n:
 * Return: 1 on success and 0 on error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit_pos = 1UL << index;

	if (index >= 8 * sizeof(unsigned long int))
	{
	return (-1);
	}

	*n = *n | bit_pos;
	return (1);
}
