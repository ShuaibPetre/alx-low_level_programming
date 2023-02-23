#include "main.h"

/**
 * main - checks if there is a digit
 * @c: input char
 * return: 1 if true otherwise 0
 *
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

