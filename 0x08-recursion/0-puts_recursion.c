#include "main.h"
/**
 * _puts_recursion - Print string followed by n line
 * @s: String to print
 * Return: None
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}
