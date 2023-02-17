#include <stdio.h>
/**
 * main - all combinaison of one number
 *
 * Return: 0;
 */
int	main(void)
{
	char	c;

	c = '0';
	while (c <= '9')
	{
		putchar(c);
		if (c != '9')
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	putchar('\n');
	return (0);
}
