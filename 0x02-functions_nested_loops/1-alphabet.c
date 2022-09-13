#include "main.h"
/**
 * Function that prints the alphabet, in lowercase
 *
 * Description: prints alphabet using _putchar
 * main.h: created header
 * Return: None
 **/
void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
