#include "main.h"
/**
 * print_numbers - prints numbers between 0 to 9.
 * Return: no return.
 */
void print_numbers(void)
{
	int index;

	index = 48;

	while (index < 58)
	{
		_putchar(index);
		index++;
	}
	_putchar('\n');
}
