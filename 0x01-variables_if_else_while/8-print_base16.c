#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48, c = 'a';

	for (; i <= 57; i++)
		putchar(i);
	for (; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
