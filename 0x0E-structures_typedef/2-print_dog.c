#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - function to print elements from struct dog
 *
 * @d: pointer to struct
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (!d)
		return;

	if (!d->name)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if (!d->owner)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
