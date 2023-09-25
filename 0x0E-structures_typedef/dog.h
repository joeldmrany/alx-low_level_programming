#ifndef DOG_H_
#define DOG_H_
/**
 * struct dog - the dog informations
 * @name: the name of the dog
 * @age: then age of the dog
 * @owner: then owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef dog dog_t;
#endif
