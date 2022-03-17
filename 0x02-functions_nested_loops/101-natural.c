#include "main.h"
#include <stdlib.h>

/**
 * _abs - check the code
 * @c: param to be checked
 * Return: abs of a value.
 */
int main(void)
{
	int i = 0;
	int sum = 0;

	for (i = 0; i <= 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
			printf("%d ", i);
		}
	}
	printf("%d", sum);
	return (0);
}
