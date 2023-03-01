#include "main.h"

/**
 * _strncat -  a function that concatenates two strings.
 * using n bytes from src
 * @dest: value to input
 * @src: value to input
 * @n: value to input
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)

{
	int i;
	int j;

	i =  0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}
