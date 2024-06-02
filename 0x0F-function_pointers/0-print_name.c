#include "function_pointers.h"
/**
 * print_name - print the name function
 * @name: the name of bob
 * @f: the function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
