#include "holberton.h"
#include <stdio.h>

/**
 * main - function that prints number of given arguemnts
 *
 * @argc: arguement count
 * @argv: arguement vector
 * Return: 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
