#include "main.h"
#include <ctype.h>
/**
 *  _islower - check the code
 * c - param to be checked
 * Return: 1 if true and 0 if false.
 */
int _islower(int c)
{
	if (islower(c) > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
