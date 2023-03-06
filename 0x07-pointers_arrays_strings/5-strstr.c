#include "main.h"
/**
 * _strstr - entry
 *@haystack: input
 *@needle: input
 *Return: 0
 */

char *_strstr(char *haystack, char *needle)

{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *l = needle;

		while (*h == *l && *l != '\0')
		{
			h++;
			l++;
		}
		if (*l == '\0')
			return (haystack);
	}
	return (0);
}
