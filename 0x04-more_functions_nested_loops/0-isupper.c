#include "main.h"

/**
 * _isupper -check for uppercase character
 * @x: integer to be checked
 * Return: 1 for uppercase or 0 for anything else
 */

int _isupper(int x)

{
	if (x >= 'A' && x <= 'Z')
	{
	return (1);
	}
	return (0);
}
