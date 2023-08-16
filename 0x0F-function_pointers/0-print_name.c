#include "function_pointers.h"
/**
 * print_name - prints the name
 * @name: the name of the person
 * @f: the funtion that will be called
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
