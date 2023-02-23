#include "main.h"

/**
 * print_diagonal - draw diagonal line on the terminal
 * @n: number of times diagonal lines should be printed
 * Return: nothing
 */

void print_diagonal(int n)

{
	int a, b;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (a = 0; a < n; a++)
	{
	for (b = 0; b < a; b++)
	{
	_putchar(32);
	}
	_putchar(92);
	_putchar('\n');
	}
	}
}
