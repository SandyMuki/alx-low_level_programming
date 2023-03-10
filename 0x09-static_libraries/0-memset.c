#include "main.h"

/**
 * _memset - filla a block of memory with specific value
 * @s: starting address of memory
 * @b: desired output
 * n: number of bytes being changed
 * Return: array with new bytes value
 */

char *_memset(char *s, char b, unsigned int n)

{
	int i = 0;
	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
