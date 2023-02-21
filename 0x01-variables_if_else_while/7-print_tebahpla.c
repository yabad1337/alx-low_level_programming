#include <stdio.h>
/**
 * main - rev alpha
 *
 * Return: 0.
 */
int	main(void)
{
	char	c;

	c = 'z';
	while (c >= 'a')
		putchar(c--);
	putchar('\n');
	return (0);
}
