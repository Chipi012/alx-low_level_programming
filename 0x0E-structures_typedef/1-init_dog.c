#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - Initialises the dog
 * @d: dog struct
 * @name: dog name
 * @age: dog age
 * @owner: Owner of dog
 * Return: None
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
