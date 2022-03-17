#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - check the code
 * Return: 0.
 */
int main(void)
{
	int i = 0;
	int sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
			/* printf("%d", i); */
		}
	}
	printf("%d", sum);
	return (0);
}
