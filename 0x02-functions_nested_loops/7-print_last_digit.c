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
	char s[2];
	char s2[2];

	lastD = abs(c) % 10;
	sprintf(s, "%d", lastD);
	sprintf(s2, "%d", lastD);
	strcat(s, s2);
	return (atoi(s));
}
