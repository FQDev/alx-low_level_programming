#include <stdlib.h>
#include <time.h>

/**
 * main - Entry function
 * Return: 0
 */
int main(void)
{
	int n, ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	ld = n % 10;
	printf("Last digit of %d is %d and is ", n, ld);
	if (ld == 0)
	{
		printf("0\n");
	}
	else if (ld > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (ld > 0 && ld < 6)
	{
		printf("and is less than 6 and not 0\n")
	}
	return (0);
}
