#include "variadic_functions.h"

/**
 * print_numbers - function to print numbers
 * @separator: string to print between numbers
 * @n: number of args passed to funtion
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nargs;
	unsigned int index = 0;

	va_start(nargs, n);
	while (index < n)
	{
		if (separator && index != 0)
			printf("%s", separator);

		printf("%i", va_arg(nargs, int));
		index++;
	}
	printf("\n");
	va_end(nargs);
}
