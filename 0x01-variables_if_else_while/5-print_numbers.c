#include <stdio.h>
/**
 * main - numbers
 *
 * Return: always 0.
 */
int	main(void)
{
	char	c;

	c = '0';
	while (c <= '9')
		putchar(c++);
	putchar('\n');
	return (0);
}
