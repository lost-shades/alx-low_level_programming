#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: concatenated string or NULL if it failed
*/

char *str_concat(char *s1, char *s2)
{
	char *s1s2;
	int i, s1_len, s2_len;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	s1_len = 0;

	while (s1[s1_len] != '\0')
	{
		s1_len++;
	}
	s2_len = 0;

	while (s2[s2_len] != '\0')
	{
		s2_len++;
	}
	s1s2 = malloc(sizeof(char) * (s1_len + s2_len + 1));

	if (s1s2 == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < s1_len; i++)
	{
		s1s2[i] = s1[i];
	}
	for (i = 0; i < s2_len; i++)
	{
		s1s2[s1_len + i] = s2[i];
	}
	s1s2[s1_len + s2_len] = '\0';
	return (s1s2);
}
