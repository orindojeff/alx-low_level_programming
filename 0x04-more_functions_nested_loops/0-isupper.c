#include "main.h"

/**
 * _isupper - Checks if character is uppercase
 * @c: input character
 *
 * Return: 1 for uppercase, 0 for otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
