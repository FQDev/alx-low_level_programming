#include "main.h"
#include "_putchar.c"

/**
 * print_most_numbers - Prints the numbers from 0-9 except for 2 and 4. 
 * Return: Nothing
 */
void print_most_numbers(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		if (num != 50 && num != 52)
		{
			_putchar(num);
		}
	}
	_putchar('\n');
}
