#include "main.h"

/**
 * _abs - calculates absolute value of a number
 * @n: number to be calculated
 * Return: absolute value of an integer or zero
 */

int _abs(int n)
{
	if (n < 0)
	{
	int abs_val;

	abs_val = n * -1;
	return (abs_val);
	}
	return (n);
}
