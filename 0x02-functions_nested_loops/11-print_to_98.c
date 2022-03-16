#include "main.h"
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_to_98 - check the code
 * @n: param
 * Return: nothing.
 */
void print_to_98(int n)
{
	printf("%d", n);
	if (n > 98)
	{
		n--;
		while (n >= 98)
		{
			printf(", %d", n);
			n--;
		}
	}
	else
	{
		n++;
		while (n <= 98)
		{
			printf(", %d", n);
			n++;
		}
	}
	printf("\n");
}
