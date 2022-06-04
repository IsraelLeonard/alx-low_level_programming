#include <stdio.h>

/**
 * main - prints alphabets in small case
 * Description: Prints all letters except 'e' and 'q'
 * Return: 0
 */
int main(void)
{
char alpha;

for (alpha = 'a'; alpha <= 'z'; alpha++)
{
	if (alpha != 'e' && alpha != 'q')
	{
		putchar(alpha);
	}

}
putchar('\n');
return (0);
}
