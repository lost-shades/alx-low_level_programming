#include "main.h"

/**
 * rot13 - function to encode a string
 * @s: the string to be encoded
 * Return: pointer to the encoded string
*/

char *rot13(char *s)
{
	char *p = s;
	int i;

	while (*p)
	{
		if ((*p >= 'A' && *p <= 'Z') || (*p >= 'a' && *p <= 'z'))
		{
			for (i = 0; i < 13; i++)
			{
				if ((*p == 'Z') || (*p == 'z'))
					*p -= 25;
				else
					(*p)++;
			}
		}
		p++;
	}
	return (s);
}
