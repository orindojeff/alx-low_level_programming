#include "main.h"
/**
 * _isalpha - checks for alphabetical characters
 *
 * @c: is a letter character return 1
 *
 * Return: 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
