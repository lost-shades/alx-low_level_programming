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
	int i, j, index;
	int total_length = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		total_length += strlen(av[i]) + 1;
	new_str = malloc(sizeof(char) * total_length + 1);
	if (!new_str)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		index = 0;
		while (av[i][index] != '\0')
		{
			new_str[j] = av[i][index];
			index++;
			j++;
		}
		new_str[j] = '\n';
		j++;
	}
	new_str[j] = '\0';
	return (new_str);
}
