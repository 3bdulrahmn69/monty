#include "monty.h"

/**
 * rotateb - rotates the stack to the bottom
 * @head: stack head
 * @counter: line_number
 * Return: void
 */
void rotateb(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *last = *head;

	if (*head == NULL || (*head)->next == NULL)
		return;

	while (last->next != NULL)
		last = last->next;

	last->next = *head;
	(*head)->prev = last;
	*head = (*head)->next;
	(*head)->prev->next = NULL;
	(*head)->prev = NULL;
}
