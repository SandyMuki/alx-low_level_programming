#include "main.h"

/**
 * main - check is a character is a number
 * @x: condition being checked
 * Return: 1 for a character that is a number and 0 for anything else
 */

int _isdigit(int x)

{
	if (x >= 48 && x <= 57)
	{
	return (1);
	}
	return (0);
}
