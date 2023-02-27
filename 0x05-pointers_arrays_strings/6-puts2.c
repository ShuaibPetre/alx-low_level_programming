#include "main.h"

/**
 * puts2 - a function that prints every other character of a string
 * , starting with the first character, followed by a new line.
 * @str: the str
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			write(1, &str[i], 1);
		}
		i++;
	}
	_putchar('\n');
}
