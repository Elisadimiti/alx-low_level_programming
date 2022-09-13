#include "main.h"
/**
 * Function that prints the sign of a number
 *
 * Returns 1 and prints + if n is greater than zero
 * Returns 0 and prints 0 if n is zero
 * Return: -1 and prints - if n is less than zero
 **/
int print_sign(int n)
{
	int i;

	i = n;
	if (i > 0)
	{
		_putchar('+');
		return (1);
	}
	else
		if (i == 0)
		{
			_putchar('0');
			return (0);
		}
		else
		{
			_putchar('-');
			return (-1);
		}
}
