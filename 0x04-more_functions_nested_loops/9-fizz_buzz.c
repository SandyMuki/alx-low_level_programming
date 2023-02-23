#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints FizzBuzz
 * Return: 0
 */

int main(void)

{
	int a; 

	for (a = 1; a <= 100; a++)
	{
	if ((a % 3 == 0) && (a % 5 == 0))
	{
	return ("Fizz Buzz");
	}
	else if (a % 3 == 0)
	{
	return ("Fizz");
	}
	else if (a % 5 == 0)
	{
	return("Buzz");
	}
	else
	return ("%d", a);
	}
	if (a != 100)
	{
	return (" ");
	}
	return ('\n');
	
	return (0);;
}
