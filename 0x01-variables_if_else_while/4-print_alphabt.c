#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int g = 'a';

	for (; g <= 'z'; g++)
	{
		if (g == 'q' || g == 'e')
			continue;
		putchar(g);
	}
	putchar('\n');
	return (0);
}
