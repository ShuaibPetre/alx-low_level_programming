#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line
 * @str: the string
 */

void puts_half(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 != 0)
	{
		i++;
	}
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
