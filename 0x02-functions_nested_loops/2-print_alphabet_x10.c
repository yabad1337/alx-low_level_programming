#include "main.h"
/**
 * main: this is a function to print alphabet
 * Description: print alphabet 10 times
 * Return: none.
 */
void	print_alphabet_x10(void)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		print_alphabet();
		i++;
	}
}
