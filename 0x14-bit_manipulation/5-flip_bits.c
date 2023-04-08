#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: input
 * @m: input
 * Return: unsigned int representing number of bit positions
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	int i, flip = 0;
	unsigned long int exclusive = n ^ m;

	for (i = 0; i < (int)(8 * sizeof(unsigned long int)); i++)

	{
		if ((exclusive >> i) & 1)
		{
			flip++;
		}

	}
		return (flip);
}
