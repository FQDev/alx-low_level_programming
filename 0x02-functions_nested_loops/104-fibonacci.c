#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/**
 * main - check the code
 * Return: 0.
 */
int main(void)
{
	long long n1 = 1, n2 = 2, sum = 3, compt = 2;

	printf("%lu, %lu, ", n1, n2);
	while (compt < 98)
	{
		sum = n1 + n2;
		printf("%lu, ", sum);
		n1 = n2;
		n2 = sum;
		compt++;
	}
	printf("%lu\n", n1 + n2);
	return (0);
}
