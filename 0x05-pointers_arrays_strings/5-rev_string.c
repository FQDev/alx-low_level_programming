#include "main.h"

/**
  * rev_string - Reverses a string
  * @s: The string to be modified
  *
  * Return: void
  */
void rev_string(char *s)
{
	int i, c;
	char aux;

	while (s[i++])
	{
		c++;
	}
	for (i = c - 1; i < (c / 2); i++)
	{
		aux = s[i];
		s[i] = s[c - i - 1];
		s[c - i - 1] = aux;
	}
}

