#include "variadic_functions.h"

/**
 * print_all - a function that prints anything
 * @format: list of all argument types passed to the function
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *separator = "";

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
			printf("%s%c", separator, va_arg(args, int));
			break;
			case 'i':
			printf("%s%d", separator, va_arg(args, int));
			break;
			case 'f':
			printf("%s%f", separator, va_arg(args, double));
			break;
			case 's':
			{
				char *string = va_arg(args, char *);

				if (string)
					printf("%s%s", separator, string);
				else
					printf("%s(nil)", separator);
			}
			break;
			default:
			break;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}
