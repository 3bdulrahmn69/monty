#ifndef MONTY_H
#define MONTY_H

/* Libraries*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct bus_s - variables -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @content: line content
 * @lifi: flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
} bus_t;
extern bus_t bus;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/* Prototybes */
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char *clean_line(char *content);
void _addf(stack_t **head, unsigned int counter);
void add_node(stack_t **head, int n);
void _divf(stack_t **head, unsigned int counter);
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file);
void free_stack(stack_t *head);
void _modf(stack_t **head, unsigned int counter);
void _mulf(stack_t **head, unsigned int counter);
void nothing(stack_t **head, unsigned int counter);
void _pallf(stack_t **head, unsigned int counter);
void printchar(stack_t **head, unsigned int counter);
void printt(stack_t **head, unsigned int counter);
void _popf(stack_t **head, unsigned int counter);
void printstr(stack_t **head, unsigned int counter);
void _pushf(stack_t **head, unsigned int counter);
void _queuef(stack_t **head, unsigned int counter);
void add_queue(stack_t **head, int n);
void rotatet(stack_t **head, __attribute__((unused)) unsigned int counter);
void rotateb(stack_t **head, __attribute__((unused)) unsigned int counter);
void _stackf(stack_t **head, unsigned int counter);
void _subf(stack_t **head, unsigned int counter);
void _swapf(stack_t **head, unsigned int counter);

#endif /* MONTY_H */
