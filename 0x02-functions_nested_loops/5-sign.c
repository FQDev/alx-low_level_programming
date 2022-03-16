#include "main.h"
#include <ctype.h>
/**
 *  print_sign - check the code
 * @n: param to be checked
 * Return: 1 and prints + if n is greater than zero, 
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is less than zero
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
