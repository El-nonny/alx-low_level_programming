#include "main.h"

/**
 * _isupper - A function that checks the uppercase character
 *
 * @c: The character to be checked
 *
 * Return: 1 is uppercase, otherwise 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	return (1);
	else
	return (0);
}
