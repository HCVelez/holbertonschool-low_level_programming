#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints multiplies two numbers
 *
 * @argc: arguement count
 * @argv: arguement vector
 * Return: 0
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	int x;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", x);
	return (0);
}
