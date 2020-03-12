#include "function_pointers.h"

/**
 * int_index - function to search for an int
 *
 * @array: ints to search
 * @size: size of array
 * @cmp: int to compare
 * Return: index of matched int or -1 if no match
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (size <= 0 || !cmp || !array)
		return (-1);

	while (index < size)
	{
		if (cmp(array[index]) != 0)
			return (index);
		index++;
	}

	return (-1);
}
