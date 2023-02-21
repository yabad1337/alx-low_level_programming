#include <stdio.h>
/**
 * main - except 'e' and 'q'
 *
 * Return: 0.
 */
int	main(void)
{
	int	c;

	c = 'a';
	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
			putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
