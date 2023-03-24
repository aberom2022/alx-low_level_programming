#include "main.h"

/**
 * _isupper - checks if parameter is an uppercase character
 * @c: input character
 *
 * Return: 1 is an uppercase character, o in other case
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
