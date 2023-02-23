#include "main.h"
/**
 * print_most_numbers - prints numbers between 0 to 9
 * (neither 2 nor 4).
 * Return: no return.
 */
void print_most_numbers(void)
{
	int index;

	index = 48;

	while (index < 58)
	{
		if (index != 50 && index != 52)
		{
			_putchar(index);
		}
		index++;
	}
	_putchar('\n');
}
