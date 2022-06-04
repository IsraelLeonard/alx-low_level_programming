#include <stdio.h>

/**
 * main - A program that prints all numbers in base 16
 * Description: A program that prints all base 16 numbers in lowercase
 * Return: 0
 */
int main(void)
{
	int n;
	char lower;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	for (lower = 'a'; lower <= 'f'; lower++)
	{
		putchar(lower);
	}
	putchar('\n');
	return (0);
}

