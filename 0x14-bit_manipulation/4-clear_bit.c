#include "main.h"

/**
 * clear_bit - set the value of a bit to 0 at a given index
 * @n: pointer to a long unsigned integer
 * @index: starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{

	unsigned long int bit_pos = ~(1UL << index);

	if (index >= 8 * sizeof(unsigned long int))
	{
	return (-1);
	}

	*n = (*n) & bit_pos;
	return (1);
}
