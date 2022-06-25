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
	int i, j, add = 0;

	if (argc > 1)
	{

		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] < 48 || argv[i][j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			add += atoi(argv[i]);
		}

		printf("%d\n", add);
	}

	else if (argc == 1)
	{
		print("0\n");
	}
	return (0);
}
