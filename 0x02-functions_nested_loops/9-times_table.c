#include "main.h"
#include <ctype.h>
/**
 * times_table - check the code
 * Return: nothing
 */
void times_table()
{
	int j = 0;
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
		for (j = 0; j < 9; j++)
		{
			int res = i x j;
			printf(",  %d", res);

		}
		int last = i x 9;
		printf(",  %d$\n", last);
	}
}
