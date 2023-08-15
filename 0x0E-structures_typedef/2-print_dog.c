#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints the strucy
 * @d: the pointer of name of struct
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %.5f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
