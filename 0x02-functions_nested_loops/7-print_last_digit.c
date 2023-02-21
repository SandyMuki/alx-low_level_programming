#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n: arguments to be passed
 * Return: last digit
 */

int print_last_digit(int n)

{
	int last;

	last = n % 10;
	if (last < 0)
	{
	last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
