#include "main.h"
/**
 * main - this program prints a simple string
 *
 * Return: 0.
 */

void	_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}

int	main(void)
{
	_putstr("_putchar\n");
	return (0);
}
