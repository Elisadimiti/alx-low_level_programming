#include <stdio.h>
#include "main.h"
/**
 * unction that prints all natural numbers from n to 98
 *
 * Returns: Always 0 (Success)
 */
void print_to_98(int n)
{
	if (n  < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ")
			}
			n--;
		}
	}
	else
	{
		printf("98");
	}
	printf("\n")
}
