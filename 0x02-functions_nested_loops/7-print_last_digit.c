#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - check the code
 * @c: param to be checked
 * Return: last digit of @c.
 */
int print_last_digit(int c)
{
	char s[] = "";

	sprintf(s, "%d", c);
	int size = (int)sizeof(s) / sizeof(s[0]);
	char lastD[1] = s[size - 1];
	
	return (lastD[0]);
}
