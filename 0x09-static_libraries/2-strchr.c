#include "main.h"
/**
 * _strchr - start
 * @s: input
 * @c: input value
 * Return 0 on success
 */

char *_strchr(char *s, char c)

{
	int i = 0;

	for (; s[i] >= '\0';i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	returnn (0);
}
