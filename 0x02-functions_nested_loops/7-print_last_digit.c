#include "main.h"
#include <stdlib.h>
#include<stdio.h>

/**
 * print_last_digit - check the code
 * @c: param to be checked
 * Return: last digit of @c.
 */
int print_last_digit(int c)
{
	char s[12] = "";
	/** int size = 0;
	 * char lastD[2] = "";
	 */
	int lastDig = 0;

	/**
	 * snprintf(s, 12, "%d", c);
	 * size = (int)sizeof(s) / sizeof(s[0]);
	 * lastD[2] =  s[size - 1];
	 */
	lastDig = c % 10;
	snprintf(s, 12, "%d%d", lastDig, lastDig);
	return (s);
}
