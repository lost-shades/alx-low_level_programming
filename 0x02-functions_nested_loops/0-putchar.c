#include <stdio.h>
#include "main.h"

void _putchar(char c)
{
	putchar(c);
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (indicating successful execution)
 */
int main(void)
{
	char text[] = "_putchar\n";
	int i = 0;

	while (text[i] != '\0')
	{
		_putchar(text[i]);
		i++;
	}

	return (0);
}
