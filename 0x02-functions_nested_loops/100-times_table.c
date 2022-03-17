#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * print_times_table - check the code
 * Return: nothing
 * @n: params for time_table
 */
void print_times_table(int n)
{
	int j = 0;
	int i = 0;

	if (n > 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			printf("0,");
			for (j = 1; j <= n; j++)
			{
				printOp(i * j);
				printf(",");
			}
			printOp(i * n);
			printf("\n");
		}
	}
}

void printOp(int v)
{
	if (v < 10)
	{
		printf("   %d,", v);
	}
	else if (v >= 10 && v < 99)
	{
		printf("  %d,", v);
	}
	else
	{
		printf(" %d", v);
	}
}
