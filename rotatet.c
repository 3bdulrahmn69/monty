#include "monty.h"

/**
 * rotatet - rotates the stack to the top
 * @head: stack head
 * @counter: line_number
 * Return: void
 */
void rotatet(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *last = *head;

	if (*head == NULL || (*head)->next == NULL)
		return;

	while (last->next != NULL)
		last = last->next;

	last->next = *head;
	(*head)->prev = last;

	*head = last->next;
	(*head)->prev->next = NULL;
	(*head)->prev = NULL;
}
