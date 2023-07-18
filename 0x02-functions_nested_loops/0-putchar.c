#include <stdio.h>

/**
 * _putchar - Custom function to output a character
 * @c: text to bw printed
 * Return: On success, returns the character to be printed
 */
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
