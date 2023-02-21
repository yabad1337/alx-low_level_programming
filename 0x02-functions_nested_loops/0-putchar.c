#include "main.h"
/**
 * _putstr - string to be printed
 *
 * Description: none
 *
 * Return: void.
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
/**
 * main - Entry point
 *
 * Description: this program prints a simple string in stdout
 *
 * Return: 0.
 */
int	main(void)
{
	_putstr("_putchar\n");
	return (0);
}
