#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers
 *
 * @argc: arguement count
 * @argv: arguement vector
 * Return: 0
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	int sum = 0;
	int count = 1;
	int index = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	while (count < argc)
	{
		while (argv[count][index])
		{
			if (argv[count][index] < 48 || argv[count][index] > 57)
			{
				printf("Error\n");
				return (1);
			}
			index++;
		}
		sum += atoi(argv[count]);
		count++;

	}

	printf("%i\n", sum);
	return (0);
}
