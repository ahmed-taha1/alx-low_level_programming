#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;

	for (; i <= 57; i++)
	{
		int j = 48;

		for (; j <= 57; j++)
		{
			int k = 48;

			for (; k <= 57; k++)
			{
				int u = 48;

				for (; u <= 57; u++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(u);
					if (i != 57 || j != 56 || k != 57 || u != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
