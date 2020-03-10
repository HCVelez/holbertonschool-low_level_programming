#include "dog.h"

/**
 * free_dog - function to free struct dog
 *
 * @d: pointer to struct
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
	}
	free(d);
}
