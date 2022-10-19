#include "main.h"

/**
 * _islower -check if c is lower or not
 * @c: the character
 * Return: 1 if letter is lower, 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

