#include "main.h"

/**
 * is_prime_number - return 1 if the given number is prime otherwise 0
 *
 *Return: 1 if number is prime otherwise 0
 *@n: the given number
 */

int is_prime_number(int n)
{

	int i;

	if (n < 3)
		return (0);

	for (i = 2 ; i <= (n/2) ; i++)
	{
		if (n % i == 0)
			return (0);
	}

	return (1);
}
