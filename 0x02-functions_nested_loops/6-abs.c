#include "holberton.h"

/**
 * _abs - return the absolute value of a number
 *
 * @num: value to pass
 * Return: absolute value
 */

int _abs(int num)
{
	if (num >= 0)
		return (num);
	else
		return (num * -1);
}
