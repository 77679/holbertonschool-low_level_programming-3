#include <stdio.h>

/**
 * main - entry point
 *
 * Return: All single digit numbers of base 10 starting from 0
*/

int main(void)
{
	int c;

	for (c = '0' ; c <= '9' ; c++)
	{
		putchar(c);
	if (c <= '8')
		putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
