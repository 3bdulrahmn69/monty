#include "monty.h"

/**
 * mulf - multiplies two elements of stack.
 * @head: stack head
 * @counter: line_number
 * Return: void
*/
void _mulf(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	he = *head;
	x = he->next->n * he->n;
	he->next->n = x;
	*head = he->next;
	free(he);
}
