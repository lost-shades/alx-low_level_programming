#include "main.h"

/**
 * is_prime_number - function that checks for prime nos and return 1
 * @n: number to be checked
 * Return: 1 if n == prime number or 0 if not
*/

int is_prime_number(int n)
{
	int divisor = 2;

	if (n <= 1)
	{
		return (0);
	}
	for (; divisor * divisor <= n; divisor++)
	{
		if (n % divisor == 0)
		{
			return (0);
		}
	}
	return (1);
}

