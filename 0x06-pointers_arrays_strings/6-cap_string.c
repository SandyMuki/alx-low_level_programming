#include "main.h"

/**
 * cap_string -  capitalizes all words of a string.
 * @str: string to be capitalized
 * Return: str
 */
char *cap_string(char *str)
{
	int i;
	int capitalize_next = 1;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (capitalize_next && (str[i]))
		{
			str[i] = (str[i]);

			capitalize_next = 0;
		}

		else if (str[i] == ' ' ||
		str[i] == '\t' ||
		str[i] == '\n' ||
		str[i] == ',' ||
		str[i] == ';' ||
		str[i] == '.' ||
		str[i] == '!' ||
		str[i] == '?' ||
		str[i] == '"' ||
		str[i] == '(' ||
		str[i] == ')' ||
		str[i] == '{' ||
		str[i] == '}'){
		capitalize_next = 1;
		}
		else
		{
		capitalize_next = 0;
		}
	}
	return (str);
}
