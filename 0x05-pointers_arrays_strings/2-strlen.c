#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: The string
 *
 * Return: returns the length of string
 */

int _strlen(char *s)
{
	int count;

	count = 0;
	while (s[count])
	{
		count++;
	}

	return (count);
}
