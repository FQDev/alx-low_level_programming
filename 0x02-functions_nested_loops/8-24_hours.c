#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * jack_bauer - check the code
 * Return: nothing.
 */
void jack_bauer(void)
{
	int m = 0;
	int s = 0;

	/* printf("00:00\n"); */
	for (m = 0; m < 24; m++)
	{
		/*
		 *
		 * if (m == 24)
		 * {
		 *	break;
		 * }
		 * if (s == 59)
		 * {
		 *	s = 0;
		 *	m++;
		 * }
		 * else
		 * {
		 *	s++;
		 * }
		 */
		for (s = 0; s < 60; s++)
		{
			if (s >= 10 && m >= 10)
			{
				printf("%d:%d", m, s);
			}
			else if (s >= 10 && m < 10)
			{
				printf("0%d:%d", m, s);
			}
			else if (s < 10 && m < 10)
			{
				printf("0%d:0%d", m, s);
			}
			else
			{
				printf("%d:0%d", m, s);
			}
			printf("\n");
		}

	}
}
