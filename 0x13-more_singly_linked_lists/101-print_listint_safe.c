#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: A pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head;
	const listint_t *fast = head;
	size_t node_count = 0;

	while (slow != NULL && fast != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		node_count++;

		fast = fast->next;
		if (fast != NULL)
		{
			fast = fast->next;
			if (fast == slow)
			{
				printf("-> [%p] %d\n", (void *)fast, fast->n);
				printf("-> [%p] %d\n", (void *)slow, slow->n);
				exit(98);
			}
		}
	}
	return (node_count);
}

