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
	char s[] = "";

	for (i = 0; i < 10; i++)
	{
		int last = i * 9;

		for (j = 0; j < 9; j++)
		{
			int res = i * j;
	
			s[] = res + "";
			if ((int)sizeof(s) / sizeof(s[0]) == 1)
			{
				printf(",  %d", res);
			}
			else
			{
				printf(", %d", res);
			}
		}

		s[] = last + "";		
		if ((int)sizeof(s) / sizeof(s[0]) == 1)
		{
			printf(",  %d\n", last);
		}
		else
		{
			printf(", %d\n", last);
		}
	}
}
