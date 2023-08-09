#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - function that concatenates all arguments of my program
 * @ac: length of the arguments
 * @av: array of stringts
 * Return: pointer to a new string or NULL if it fails
*/

char *argstostr(int ac, char **av)
{
	char *new_str;
	int i, j, length, total_length;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		length  = 0;
		while (av[i][length] != '\0')
		{
			length++;
		}
		total_length += length;
	}

	new_str = malloc(sizeof(char) * total_length + ac);
	if (!new_str)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		length = 0;
		while (av[i][length] != '\0')
		{
			new_str[j] = av[i][length];
			length++;
			j++;
		}
		new_str[j] = '\n';
		j++;
	}
	new_str[j] = '\0';
	return (new_str);
}

