#include "main.h"

/**
 * _print_rev_recursion - Print reversed string
 * @s: Reversed string
 * Return: none
 */

void _print_rev_recursion(char *s)void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	s++;
	_print_rev_recursion(s);
	s**;
	_putchar(*s);
}
