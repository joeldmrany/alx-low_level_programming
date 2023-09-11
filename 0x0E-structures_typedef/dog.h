#ifndef DOG
#define DOG
/**
 * struct dog - define
 * @name: the name of the dog
 * @age: the age
 * @owner: teh owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
