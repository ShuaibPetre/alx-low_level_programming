#include <unistd.h>

/**
 * main - entry point
 *
 * Return: 1 always success
 */

int main(void)
{
	char c[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, c, 59);
	return (1);
}
