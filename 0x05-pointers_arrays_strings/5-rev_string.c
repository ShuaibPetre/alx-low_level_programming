#include "main.h"

/**
 * rev_string -  a function that reverses a string.
 * @s:  the character
 */

void rev_string(char *s)
{
	int i, j, len;
	char temp;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}

	len = i - 1;
	for (j = 0; j < len; j++)
	{
		temp = s[j];

		s[j] = s[len];
		s[len] = temp;

		len--;
	}
}
