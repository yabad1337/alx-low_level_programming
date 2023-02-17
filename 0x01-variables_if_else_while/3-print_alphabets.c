#include <stdio.h>
/**
 * main - more alphabets
 *
 * Return: 0.
 */
int	main(void)
{
	char	c;

	c = 'a';
	while (c <= 'z')
		putchar(c++);
	c = 'A';
	while (c <= 'Z')
		putchar(c++);
	putchar('\n');
	return (0);
}
