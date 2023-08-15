#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - count number of letters
 * @a: string
 * Return: number of letters
 */
int _strlen(const char *a)
{
	int i;
		for (i = 0; a[i]; i++)
		{
		}
		return (i);
}
/**
 * _strcpy - copy the string from place to another one
 * @source: the source string
 * @destination: the destination copied string
 * Return: destination
 */
char *_strcpy(char *destination, char *source)
{
	int b;

	for (b = 0; source[b]; b++)
		destination[b] = source[b];
	destination[b] = '\0';
	return (destination);
}
/**
 * new_dog - function creates new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: struct pointer dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);
	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->name = _strcpy(dog->name, name);
	dog->owner = _strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
