#include "monty.h"

/**
 * printstr - prints the string at stack top
 * @head: stack head
 * @counter: line_number
 * Return: void
*/
void printstr(stack_t **head, unsigned int counter)
{
	stack_t *he;
	(void)counter;

	he = *head;
	while (he)
	{
		if (he->n > 127 || he->n <= 0)
		{
			break;
		}
		printf("%c", he->n);
		he = he->next;
	}
	printf("\n");
}
