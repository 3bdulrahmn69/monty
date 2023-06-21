#include "monty.h"

/**
 * _subf- sustration
 * @head: stack head
 * @counter: line_number
 * Return: void
 */
void _subf(stack_t **head, unsigned int counter)
{
	stack_t *x;
	int sustr, nodes;

	x = *head;
	for (nodes = 0; x != NULL; nodes++)
		x = x->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	x = *head;
	sustr = x->next->n - x->n;
	x->next->n = sustr;
	*head = x->next;
	free(x);
}
