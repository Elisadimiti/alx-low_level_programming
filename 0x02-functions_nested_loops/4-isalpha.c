#include "main.h"
/**
 * Function that checks for alphabetic character
 *
 * Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise
 **/
int _isalpha(int c)
{
	int i;

	i = c;
	if ((i >= 97 && i <= 122) || (i >= 65 && i <= 90))
		return (1);
	else
		return (0);
}
