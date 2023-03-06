#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte
 * @b: desired address of memory to print
 * @n: memory size to be changed
 * @s: address of memory to be filled
 *
 * Return: array with new value of n bytes
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
