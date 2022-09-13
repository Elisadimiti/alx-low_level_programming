#include "main.h"
/**
 * Function that prints 10 times the alphabet, in lowercase
 *
 * Return: None
 **/
void print_alphabet_x10(void)
{
	char c;
	int i;

	i = 0;
	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_Putchar(c);
			c++;
		}
		i++;
	_putchar('\n');
	}
}
