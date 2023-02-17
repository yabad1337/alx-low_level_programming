#include <stdio.h>
/**
 * main - 2 comb
 *
 * Return: 0.
 */
int	main(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	while (n1 < 9)
	{
		n2 = n1 + 1;
		while (n2 < 10)
		{
			putchar(n1 + '0');
			putchar(n2 + '0');
			if (!(n1 == 8 && n2 == 9))
			{
				putchar(',');
				putchar(' ');
			}
			n2++;
		}
		n1++;
	}
	putchar('\n');
	return (0);
}
