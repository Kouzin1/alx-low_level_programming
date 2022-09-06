#include "main.h"
/**
 * _isupper - function that verifies if a characteris uppercase or not
 * @c: tested character
 * Return: return 1 if it is uppercase, 0 if not
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);

	return (0);
}
