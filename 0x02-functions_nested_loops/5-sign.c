#include "main.h"
#include <ctype.h>

/**
 * print_sign - check the code
 * @n: param to be checked
 * Return: 1 or 0 or -1
 */
int print_sign(int n)
{
	char res[3] = "+0-";

	if (n > 0)
	{
		_putchar(res[0]);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(res[1]);
		return (0);
	}
	else
	{
		_putchar(res[2]);
		return (-1);
	}
}
