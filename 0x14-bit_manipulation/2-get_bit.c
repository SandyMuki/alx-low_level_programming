#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @index: location of bit to retrieve
 * @n: input
 * Return: value of bit at index or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{

	unsigned long int bit_pos = 0;
	int bit_val;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	bit_pos = sizeof(n) * 8 - 1;
	while (bit_pos > 0)

	{
		if (bit_pos == index)
		{
			bit_val = (n >> bit_pos) & 1;
			break;
		}
		bit_pos--;

	if (bit_pos == index)
	{
		bit_val = n & 1;
	}

	}

	return (bit_val);


}
