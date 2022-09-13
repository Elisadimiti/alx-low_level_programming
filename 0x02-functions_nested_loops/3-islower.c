#include "main.h"
/**
 * Function that checks for lowercase character
 *
 * Return: 1 if it is lower case, 0 otherwise
 **/
int _islower(int c)
{
	int i;

	i = c;
	if (i >= 97 && i <= 122)
		return (1);
	else
		return (0);
}
