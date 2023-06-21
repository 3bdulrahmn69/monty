#include "monty.h"

/**
 * _addf - add two elements to stack head
 * @head: stack head
 * @counter: line_number
 * Return: void
 */
void _addf(stack_t **head, unsigned int counter)
{
	stack_t *he;
	int len = 0, x;

	he = *head;
	while (he)
	{
		he = he->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	he = *head;
	x = he->n + he->next->n;
	he->next->n = x;
	*head = he->next;
	free(he);
}
