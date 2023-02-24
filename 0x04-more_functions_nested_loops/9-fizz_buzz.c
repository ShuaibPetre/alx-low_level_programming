#include <stdio.h>

/**
 * main - program that prints the numbers from 1 to 100
 * followed by a new line. But for multiples of three print Fizz
 * and for the multiples of five print Buzz.
 * numbers which are multiples of both three and five print FizzBuzz
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (n % 3 == 0 && !(n % 5 == 0))
		{
			printf("Fizz");
		}
		else if (n % 5 == 0 && !(n % 3 == 0))
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", n);
		}


		if (n != 100)
		{
			putchar(' ');
		}
		else
		{
			putchar('\n');
		}
	}

	return (0);
}

