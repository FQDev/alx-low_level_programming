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
	int lastD = 0;
	char s[20];

	lastD = abs(c) % 10;
	sprintf(s, "%02d", lastD);
	return (atoi(s));
}
