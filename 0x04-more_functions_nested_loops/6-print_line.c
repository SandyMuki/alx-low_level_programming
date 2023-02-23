#include "main.h"

/**
 * print_line - print straightline according to condition
 * @n: number of lines to be drawn
 * Return: nothing
 */

void print_line(int n)

{
	int a;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (a = 0; a < n; a++)
	{
	_putchar(95);
	}
	_putchar('\n');
	}
}
