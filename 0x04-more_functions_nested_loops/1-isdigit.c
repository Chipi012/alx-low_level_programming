#include "main.h"
/**
 * _isdigit - Check if a charecter is a digit
 * @x: The number to be checked
 * Return: 1 for a charecter or 0 for any else
 */

int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	return (0);
}
