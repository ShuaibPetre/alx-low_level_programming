#include "main.h"

/**
 * print_rev - a function that prints a string, followed by a
 * new line, to stdout.
 * @s: the character
 */
void print_rev(char *s)
{
	int i, length;

	i = 0;
	while (s[i])
	{
		i++;
	}

	length = i;
	while (length--)
	{
		_putchar(s[length]);
	}
	_putchar('\n');
}
