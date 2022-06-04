#include <stdio.h>

/**
 * main - A program that prints all single digit
 * Description: A program that prints all single digit numbers of base 10
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar (n + '0');
	}
	putchar('\n');
	return (0);
}

