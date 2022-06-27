#include "main.h"

/**
 * _strchr - Returns a pointer to the first occurrence
 * of the character c in the string s, or NULL if the
 * character is not found
 *
 * @s: string tarageted
 * @c: character targeted
 *
 * Return: returns pointer to first occurence of c
 */
char *_strchar(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++);
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
