#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (success)
 */

int main(void)
{
	long n = 612852475143;
	int inc;

	while (inc++ < n / 2)
	{
		if (n % inc == 0)
		{
			n /= 2;
			continue;
		}

		for (inc = 3; inc < n / 2; inc += 2)
		{
			if (n % inc == 0)
				n /= inc;
		}
	}
	printf("%ld\n", n);

	return (0);
}
