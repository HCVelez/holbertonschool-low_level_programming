#include "variadic_functions.h"

/**
 * print_all - function to print any given arguement
 * @format: type of format passed to function
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list nargs;
	int index = 0;
	char *str;

	va_start(nargs, format);
	while (format && format[index])
	{
		switch (format[index])
		{
			case 'c':
				printf("%c", (char) va_arg(nargs, int));
				break;
			case 'i':
				printf("%i", va_arg(nargs, int));
				break;
			case 'f':
				printf("%f", (float) va_arg(nargs, double));
				break;
			case 's':
				str = va_arg(nargs, char*);
				if (str)
				{
					printf("%s", str);
					break;
				}
				printf("(nil)");
				break;
		}

		if (index != 0 && format[index + 1])
			printf("' ");
		index++;
	}
	printf("\n");
	va_end(nargs);
}
