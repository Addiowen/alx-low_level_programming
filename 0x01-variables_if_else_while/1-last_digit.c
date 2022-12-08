#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *    * main - Checks last digit
 *       *
 *          *Return: zero
 */
int main(void)
{
	int n;
	int i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	N = N % 10;

	if (1 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, 1);
	} else if (1 == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, 1);
	} else if (1 < 6 && 1 != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and mot 0\n", n, 1);
	}
	return (0);
}
