#include "main.h"

/**
 * _isalpha -  a function that checks for alphabetic character.
 *
 * @c: parameter of function _islower
 *
 * Return: Return 0 or 1
 *
 */

int _isalpha(int c)
{
	if ((c >= 65) && (c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

