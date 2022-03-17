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
	unsigned long n1 = 1, n2 = 2, sum = 5;

	/* printf("%lu, %lu, 3, ", n1, n2); */
	while (n1 + n2 < 5000000)
	{
		sum = n1 + n2;
	        /**
		 * printf("%lu, ", sum);
		 */
		n1 = n2;
		n2 = sum;
	}
	printf("%lu\n", sum);
	return (0);
}
