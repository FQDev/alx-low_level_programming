#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

/**
 * print_last_digit - check the code
 * @c: param to be checked
 * Return: last digit of @c.
 */
int print_last_digit(int c)
{
	/**
	 * char s[12] = "";
	 * int size = 0;
	 * char lastD[2] = "";
	 *
	 * int lastDig = 0;
	 *
	 * snprintf(s, 12, "%d", c);
	 * size = (int)sizeof(s) / sizeof(s[0]);
	 * lastD[2] =  s[size - 1];
	 *
	 * lastDig = c % 10;
	 * snprintf(s, 12, "%d%d", lastDig, lastDig);
	 * s[0] = lastDig;
	 * s[1] = lastDig;
	 */
	int num = abs(c) % 10;
	 /* int retval = num * pow(10, (int)log10(num)+1) + num;*/
	char s1[2];
	/**
	 * char s2[20];
	 * int retval = 0;
	 *
	 * sprintf(s1, "%d", num);
	 * sprintf(s2, "%d", num);
	 * strcat(s1, s2);
	 * retval = atol(s1);
	 */
	s1[0] = num;
	s1[1] = num;

	return (atoi(s1));
}
