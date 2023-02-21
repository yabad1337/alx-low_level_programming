#include <stdio.h>
/**
 * main - this program prints all alphabet
 * Return: return value should be zero.
 */
int	main(void)
{
	char	c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
