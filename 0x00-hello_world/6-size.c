#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 on success
 */
int main(void)
{
	printf("The size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
	printf("The size of an int: %lu byte(s)\n", (unsigned long)sizeof(int));
	printf("The size of a long int: %lu byte(s) \n", (unsigned long)sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));


		return (0);
}
