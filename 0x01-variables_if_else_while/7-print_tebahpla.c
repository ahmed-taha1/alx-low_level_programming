#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int g = 'z';

	for (; g >= 'a'; g--)
		putchar(g);
	putchar('\n');
	return (0);
}
