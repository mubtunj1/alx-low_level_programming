#include "main.h"
/**
 * _isalpha - check if it is alpha
 * @c: charater to be check
 *
 * Return: 1 if character is a letter, 0 otherwise
 */
int int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
