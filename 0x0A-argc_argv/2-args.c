#include "holberton.h"
#include <stdio.h>

/**
 * main - program thoat prints all arguments it recieves
 *
 * @argc: arguement count
 * @argv: arguement vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int index = 0;

	while (index < argc)
		printf("%s\n", argv[index++]);

	return (0);
}
