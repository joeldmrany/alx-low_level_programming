#ifndef DOG_H_
#define DOG_H_
/**
 * struct dog - structure to change the type
 * @name: char type
 * @age: float type
 * @owner: char type
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
#endif
