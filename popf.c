#include "monty.h"

/**
 * _popf - prints stack top
 * @head: stack head
 * @counter: line_number
 * Return: void
*/
void _popf(stack_t **head, unsigned int counter)
{
	stack_t *he;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	he = *head;
	*head = he->next;
	free(he);
}
