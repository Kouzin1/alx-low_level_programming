#include "main.h"
/**
 * _strncat - concatenates two strings but add inpuuted number of bytes
 * @dest: stringto be appended upon
 * @src: string to completed at end of dest
 * @n: integer parameter to compare index to
 * Return: returns new concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
