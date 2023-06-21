#include "monty.h"

/**
 * _modf - computes the rest of the division of the second top element
 * @head: stack head
 * @counter: line_number
 * Return: void
*/
void _modf(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	he = *head;
	if (he->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	x = he->next->n % he->n;
	he->next->n = x;
	*head = he->next;
	free(he);
}
