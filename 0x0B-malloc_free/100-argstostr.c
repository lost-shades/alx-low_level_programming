#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - function to concatenate argument and print them
 * @ac: number of argument
 * @av: argument pass
 * Return: the concatenate string
 */
char *argstostr(int ac, char **av)
{
	int len, total_len, i, j;
	char *newArray;

	total_len = 0;

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

	newArray = malloc((sizeof(char) * total_len) + ac + 1);

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
