#include "function_pointers.h"

/**
 * print_name - function to print a name
 *
 * @name: name to print
 * @f: pointer to a function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
