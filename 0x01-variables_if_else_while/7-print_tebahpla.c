#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	char r;

	r = 'z';
	while (r >= 0)
	{
		putchar(r);
		r++;
	}
	putchar('\n');
	return (0);
}
