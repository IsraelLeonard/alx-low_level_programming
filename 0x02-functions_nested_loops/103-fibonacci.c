#include <stdio.h>

/**
 * main - prints the sum of the even-valued terms, followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long fib_1 = 0, fib_2 = 1, sum = fib_1 + fib_2;

	float total_sum;

	while (1)
	{
		if (sum > 4000000)
			break;
	if ((sum % 2) == 0)
	total_sum += sum;
	fib_1 = fib_2;
	fib_2 = sum;
	}
	printf("%.0f\n", tatal_sum);
		return (0);

}
