/**
 * main - description of this programming is to list positive numbers
 *
 * return when success
 */
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int main(void)
{

/**
 * variables n declared
 * the assign the random value
 */

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0);
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
