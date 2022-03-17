#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - check the code
 * Return: 0.
 */
int main(void)
{
	unsigned long i = 0, n1 = 1, n2 = 2, sum = 0;
	
	printf("%lu, %lu, ", n1, n2);
	for (i = 3; i < 50; i++)
	{
		sum = n1 + n2;
		printf("%lu, ", sum);
		n1 = n2;
		n2 = sum;
	}
	printf("%lu\n", n1 + n2); 
	return (0);
}
