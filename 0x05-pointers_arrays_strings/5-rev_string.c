#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: Pointer to a string.
 */
void rev_string(char *s)
{
	int length = 0;
	int start = 0;
	char temp;

	/* Calculate the length of the string */
	while (s[length] != '\0')
		length++;

	/* Swap characters from both ends until the middle */
	while (start < length - 1)
	{
		temp = s[start];
		s[start] = s[length - 1];
		s[length - 1] = temp;

		start++;
		length--;
	}
}
