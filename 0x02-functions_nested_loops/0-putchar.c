#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char w[] = "_putchar\n";
	int i = 0;
	int length_w = sizeof(w) / sizeof(w[0]);
	
	for (i = 0; i < length_w; i++)
	{
		_putchar(w[i]);
	}
	return (0);
}
