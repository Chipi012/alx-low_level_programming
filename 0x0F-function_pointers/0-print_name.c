#include "function_pointers.h"

/**
 * print_name - Print name
 * @name: Name being printed
 * @f: Pointer to function
 * Return: None
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
