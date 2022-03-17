#include "main.h"
#include <stdlib.h>

/**
 * jack_bauer - check the code
 * Return: nothing.
 */
void jack_bauer(void)
{
	char t[5] = "00:00";
	char cm[2] = "00";
	char cs[2] = "00";
	int m = 0;
	int s = 0;
	
	while (m < 24)
	{
		printf(t);
		if (s == 59)
		{
			s = 0;
			m++;
		}
		else
		{
			s++;
		}
		if (s > 10)
		{
			snprintf(cm, 2, "%d", s);
		}
		else
		{
sh: 1: q: not found
		}


	}
}
