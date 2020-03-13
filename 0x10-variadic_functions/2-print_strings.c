#include "variadic_functions.h"

/**
 * print_strings - function to print strings
 * @separator: string to print between other strings
 * @n: number of args passed to funciton
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list nargs;
	unsigned int index = 0;
	char *str;

	va_start(nargs, n);
	while (index < n)
	{
		str = va_arg(nargs, char*);
		if (separator && index != 0)
			printf("%s", separator);
		if (str)
			printf("%s", str);
		else if (!str)
			printf("(nil)");
		index++;
	}
	printf("\n");
	va_end(nargs);
}
