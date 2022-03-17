#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - check the code
 * Return: 0.
 */
int main(void)
{
	unsigned long i = 0, n1 = 1, n2 = 2, sum = 3;

	printf("%lu, %d", n1, n2);
	while (sum < 4000000)
	{
		sum = n1 + n2;
		printf("%lu, ", sum);
		n1 = n2;
		n2 = sum;
	}
	printf("%lu\n", n1 + n2);
	return (0);
}
