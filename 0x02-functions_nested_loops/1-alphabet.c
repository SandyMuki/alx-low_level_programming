#include "main.h"

/**
 * print_alphabet -> prints lowercase alphabets
 *Return: void
 */

void print_alphabet(void)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
