#include "monty.h"

/**
  *rotateb- rotates the stack to bottom
  *@head: stack head
  *@counter: line_number
  *Return: void
 */
void rotateb(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *cp;

	cp = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (cp->next)
	{
		cp = cp->next;
	}
	cp->next = *head;
	cp->prev->next = NULL;
	cp->prev = NULL;
	(*head)->prev = cp;
	(*head) = cp;
}
