#include "dog.h"
#include <stdlib.h>
char *_strdup(char *str);

/**
 * new_dog - function to create a new dog
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to struct or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *dogname, *dogowner;

	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);

	dogname = _strdup(name);
	if (!dogname)
	{
		free(dogname);
		free(dog);
		return (NULL);
	}

	dogowner = _strdup(owner);
	if (!dogowner)
	{
		free(dogname);
		free(dogowner);
		free(dog);
		return (NULL);
	}

	dog->name = dogname;
	dog->age = age;
	dog->owner = dogowner;

	return (dog);
}


/**
 * _strdup - function that copies a string to a newly alloced space in memory
 *
 * @str: string to copy
 * Return: dest if successful, 0/NULL if not
 */

char *_strdup(char *str)
{
	unsigned int index = 0, len = 0;
	char *dest;

	if (str == NULL)
		return (NULL);

	while (str[len++])
	;

	dest = malloc(sizeof(char) * len);
	if (!dest)
		return (0);

	while (str[index])
	{
		dest[index] = str[index];
		index++;
	}

	if (dest[index] == '\0')
		return (dest);

	return (0);
}
