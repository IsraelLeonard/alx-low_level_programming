#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - program to print last digit of variable n
 * Description: checks the digit relative to five and zero
 * Return: 0
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
		n = rand() - RAND_MAX / 2;
			/* your code goes there */
		last_digit = n % 10;
		if (last_digit > 5)
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
		}
		else if (n == 0)
		{
			printf("Last digit of %d is %d and is 0\n", n, last_digit);
		else
		{
			printf("Last digit of %d is %d a
					nd is less than 6 and not 0\n", n, last_digit);
		}
			return (0);
}
