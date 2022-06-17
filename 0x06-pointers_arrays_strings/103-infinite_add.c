#include <stdio.h>
#include "main.h"

/**
 * add_strings - Adds the numbers stored in two strings.
 * @n1: The string containing the first number to be added.
 * @n2: The string containing the second number to be added.
 * @r: The buffer to store the result.
 * @r_index: the current index of the buffer.
 *
 * Return: If r can store the sum - a pointer to the result else return 0.
 */
int _atoi(char *s)
{
	int sign = 1, resp = 0, firstNum;

	for (firstNum = 0; !(s[firstNum] >= 48 && s[firstNum] <= 57); firstNum++)
	{
		if (s[firstNum] == '-')
		{
			sign *= -1;
		}
	}

	for (int i = firstNum; s[i] >= 48 && s[i] <= 57; i++)
	{
		resp *= 10;
		resp += (s[i] - 48);
	}

	return (sign * resp);
}

void int_to-string(int n)
{
	int divisor = 1, i, resp;

	for (i = 0; n / divisor > 9; i++)
	{
		divisor *= 10;
	}

	char str[i];

	for (int cmpt = 0; divisor >= 10; divisor /= 10, cmpt++)
	{
		resp = n / divisor;
		str[cmpt] = '0' + resp;
		n = n - resp * divisor;
	}
	str[i] = ('0' + n);

}
char *infinite_add(char *n1, char *n2, char *r, int r_index)
{
	int sum, a, b;
	a = _atoi(n1);
	b = _atoi(n2);

	sum = a + b;
}
