#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * _strdup - function that returns a ptr to a newly allocated space in memory
 * @str: the string given as parameter
 * Return: ptr to duplicate string or NULL if memory is insufficient
*/

char *_strdup(char *str)
{
	char *new_str;
	unsigned int i;
	unsigned int newstr_len = strlen(str);

	if (str == NULL)
	{
		return (NULL);
	}
	new_str = malloc(sizeof(char) * (newstr_len + 1));
	if (new_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < newstr_len; i++)
	{
		new_str[i] = str[i];
	}
	new_str[newstr_len] = '\0';
	return (new_str);
}
