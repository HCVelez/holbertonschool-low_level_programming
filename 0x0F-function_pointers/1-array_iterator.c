#include "function_pointers.h"

/**
 * array_iterator - function to execute a function given as a parameter
 *
 * @array: array of ints
 * @size: size of array
 * @action: pointer to given function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index = 0;

	if (action)
		if (array)
			while (index < size)
				action(array[index++]);
}
