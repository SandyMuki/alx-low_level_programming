#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the unsigned long integer
 */

void print_binary(unsigned long int n)

{

	unsigned long int bit_pos = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int leading_zero = 1;

	while (bit_pos)
	{
	if ((bit_pos & n) != 0)
		{
		leading_zero = 0;
		_putchar('1');
		}
	else
	{
		if (!leading_zero)
		{
			_putchar('0');
		}
	}

	bit_pos >>= 1;

	}

	if (leading_zero)
		_putchar('0');


}
