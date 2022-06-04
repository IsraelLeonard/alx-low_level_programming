#include <stdio.h>

/**
 * main - A program that prints possible combinations
 * Description: A program that prints all single digits possible combinations
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar (n + '0');
		if (n < 9)
		{
			putchar(',');
				putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

