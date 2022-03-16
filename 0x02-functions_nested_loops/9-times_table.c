#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * times_table - check the code
 * Return: nothing
 */
void times_table(void)
{
	int j = 0;
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
		for (j = 0; j < 9; j++)
		{
			int res = i * j;
			printf(",  %d", res);

		}
		int last = i * 9;
		printf(",  %d$\n", last);
	}
}
