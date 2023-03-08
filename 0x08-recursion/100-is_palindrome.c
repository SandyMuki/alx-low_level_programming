#include "main.h"

int check_pal(char *s, int i int leng);
int _strlen_recursion(char *s);

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: string
 * Return: 0 if it isn't and 1 if it is
 */

int is_palindrome(char *s)

{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/** _strlen_recursion - returns length of string
 * @s: calculated string's lenth 
