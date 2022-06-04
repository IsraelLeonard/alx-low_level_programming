#include <stdio.h>

/**
 * main - To prints the alphabet in lowercase
 * Description: This program prints in lowercase, followed by a new line
 * Return: 0
 */
int main(void)
{
char alphabet;

for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
{
putchar(alphabet);
}
putchar('\n');
return (0);
}
