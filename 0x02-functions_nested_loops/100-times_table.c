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
	if (n > 0 || n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			int last = i * n;

			for (j = 0; j <= n; j++)
			{
				int res = i * j;

				if (j == 0)
				{
					printf("%d,", res);
				}
				else if (res < 10)
				{
					printf("   %d,", res);
				}
				else if (res >= 10 && res < 99)
				{
					printf("  %d,", res);
				}
				else
				{
					printf(" %d,", res);
				}
			}
			if (last < 10)
			{
				printf("   %d\n", last);
			}
			else if (last >= 10 && last < 99)
			{
				printf("  %d,", last);
			}
			else
			{
				printf(" %d\n", last);
			}
		}
	}
}
