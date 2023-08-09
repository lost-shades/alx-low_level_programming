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
	int len, total_len, i, j;
	char *newArray;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len] != '\0')
		{
			len++;
		}
		total_len += len;
	}

	newArray = malloc(sizeof(char) * total_len);

	j = 0;
	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len] != '\0')
		{
			newArray[j] = av[i][len];
			len++;
			j++;
		}
		newArray[j] = '\n';
		j++;
	}
	newArray[j] = '\0';

	return (newArray);
}
