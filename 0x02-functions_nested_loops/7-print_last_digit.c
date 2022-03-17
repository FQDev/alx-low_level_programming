#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/**
 * print_last_digit - check the code
 * @c: param to be checked
 * Return: last digit of @c.
 */
int print_last_digit(int c)
{
	int lastD = 0;
	char s[2] = '0';

	lastD = abs(c) % 10;
	s[0] = lastD;
	s[1] = lastD;
	return (s);
}
