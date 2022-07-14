#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Alwau=ys 0.
 */
int main(void)
{
	list_t *head;

	head = NULL;
	add_node_end(&head, "Leye");
	add_node_end(&head, "Chika");
	add_node_end(&head, "asm");
	print_list(head);
	free_list(head);
	head = NULL;
	return (0);
}
