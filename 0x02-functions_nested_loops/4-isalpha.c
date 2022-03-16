#include "main.h"
#include <ctype.h>
/**
 *  _isalpha - check the code
 * @c: param to be checked
 * Return: 1 if true and 0 if false.
 */
int _isalpha(int c)
{
	if (isalpha(c) > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
