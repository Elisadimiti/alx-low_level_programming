#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
		int n;
		int ld;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					/* your code goes there */
				ld = n % 10;
				printf("Last digit of %d ", n);
				printf("is ");
				if (ld == 0)
					printf("%d and is 0\n", ld);
				else
				if (ld > 5)
					printf("%d and is greater than 5\n", ld);
				else
					printf("%d and is less than 6 and not 0\n", ld);
					return (0);
}
