#include "monty.h"

/**
 * printchar - prints the char at stack top
 * @head: stack head
 * @counter: line_number
 * Return: void
*/
void printchar(stack_t **head, unsigned int counter)
{
	stack_t *he;

	he = *head;
	if (!he)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (he->n > 127 || he->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", he->n);
}
