#include "dog.h"
/**
 * init_dog - structure function
 * @d: pointer for its name
 * @name: name
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: nothing (void)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
