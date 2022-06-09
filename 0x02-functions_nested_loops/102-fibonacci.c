#include <stdio.h>

/**
 * main - Prints the dirst fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long sum, fib_1, fib_2;
	int count;

	fib_1 = 0;
	fib_2 = 1;
	for (count = 0; count < 50; count++)
	{
		sum = fib_1 + fib_2;
		printf("%lu",  sum);

		fib_1 = fib_2;
		fib_2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
