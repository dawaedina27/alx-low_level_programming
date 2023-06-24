#include <stdio.h>
#include "main.h"

/**
 * main - finds and prints the largest prime factor of the number 612852475143, followed by a new line.
 * Return: Always 0 (Success)
 */

int main(void)
{
	lont int n;
	lont int max;
	lont int i;

	n = 612852475143;
	max = -1;

	while (n % 2 == 0)
	{
		max = 2;
		n /= 2;
	}

	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			max = i;
			n = n/i;
		}
	}
	printf("%id\n", max);

	return (0);
}

