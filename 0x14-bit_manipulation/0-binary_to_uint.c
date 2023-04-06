#include "main.h"
#include <string.h>

/**
 * binary_to_uint - converting a binary number to an unsigned int
 * @b: pointer to a string 0 and 1 chars
 *
 * Return: converted number or 0 if chars arent 0 or 1 or  b is null
 */

unsigned int binary_to_uint(const char *b)

{
	unsigned int n = 0;
	int  len = strlen(b);
	int i = 0;

	if (!b)
		return (0);

	while (i < len)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		n = n << 1;
		n += b[i] - '0';
		i++;

	}
		return (n);
}
