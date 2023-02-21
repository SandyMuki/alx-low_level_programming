#include "main.h"

/**
 * print_sign - print sign of a number based on condition
 * @n: argument to be checked
 * Return: 1, 0 or -1
 */

int print_sign(int n)

{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
