#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds two positive number
 * @argc: number of a guments
 * @argv: array of arguments
 *
 * Return: 0 (Success), or 1(Error)
 */

int main(int argc, char *argv[])
{
	int i, sum, count;

	count = 1;
	sum = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (count < argc)
	{
		for (i = 0; argv[count][i] != '\0'; i++)
		{
			if (!(isdigit(argv[count][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[count]);
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
