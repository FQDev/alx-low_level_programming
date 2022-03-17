#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_times_table - check the code
 * Return: nothing
 * @n: params for time_table
 */
void print_times_table(int n)
{
	int j = 0, i = 0;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			printf("0");
			for (j = 1; j <= 1; j++)
			{
				if (i * j < 10)
				{
					printf(",   %d", i * j);
				}
				else if (i * j >= 10 && i * j < 99)
				{
					printf(",  %d", i * j);
				}
				else
				{
					printf(", %d", i * j);
				}
			}
			printf("\n");

		}
	}
}
