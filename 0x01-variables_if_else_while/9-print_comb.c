#include <stdio.h>
/**
 * main - all combinaison of one number
 *
 * Return: 0;
 */
int	main(void)
{
	int	c;

	c = 0;
	while (c <= 9)
	{
		putchar(c + '0');
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	putchar('\n');
	return (0);
}
