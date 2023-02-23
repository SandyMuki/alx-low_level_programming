#include "main.h"

/**
 * more_numbers: print 0 to 14 10 times
 * Return: show 0 to 14 10 times
 */

void more_numbers(void)

{
	int a, b;

	for (a = 0; a < 14; a++)
	{
	for (b = 0; b <= 14; b++)
	{
	if (b > 9)
	{
	_putchar((a / 10) + '0');
	}
	_putchar((a % 10) + '0');
	}
	_putchar('\n');
	}
}
