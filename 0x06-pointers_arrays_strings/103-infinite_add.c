#include "main.h"

/**
 * infinite_add - Adds two numbers represented as strings.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: A pointer to the result (r), or 0 if the result cannot be stored.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, carry = 0, sum, i, j;

	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;

	if (len1 >= size_r || len2 >= size_r)
		return (0);
	r[size_r - 1] = '\0';

	for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry; i--, j--)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';
		if (sum >= 10)
		{
			carry = 1;
			sum -= 10;
		}
		else
		{
			carry = 0;
		}
		if (size_r - 2 < 0)
			return (0);

		r[size_r - 2] = sum + '0';
		size_r--;
	}

	while (r[size_r] != '\0')
	{
		r[size_r - 1] = r[size_r];
		size_r++;
	}
	return (r);
}
