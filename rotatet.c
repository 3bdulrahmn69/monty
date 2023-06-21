#include "monty.h"

/**
 * rotatet - rotates the stack to top
 * @head: stack head
 * @counter: line_number
 * Return: void
 */
void rotatet(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *tmp = *head, *x;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	x = (*head)->next;
	x->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = x;
}
