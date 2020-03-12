#include "3-calc.h"

/**
 * main - program to calculate basic math
 * @argc: arguement count
 * @argv: array of arguements
 * Return: solution or exit error
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	char *op;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);
	f = get_op_func(op);

	if (!f)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' || *op == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", f(num1, num2));
	return (0);
}
