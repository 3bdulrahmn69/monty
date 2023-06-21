#include "monty.h"

/**
 * _pallf - prints stack
 * @head: stack head
 * @counter: no used
 * Return: void
*/
void _pallf(stack_t **head, unsigned int counter)
{
	stack_t *he;
	(void)counter;

	he = *head;
	if (he == NULL)
		return;
	while (he)
	{
		printf("%d\n", he->n);
		he = he->next;
	}
}
