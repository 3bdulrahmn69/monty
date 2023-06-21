#include "monty.h"

bus_t bus = {NULL, NULL, NULL, 0};

/**
 * main - main code interpreter
 * @argc: number of arguments
 * @argv: main file location
 * Return: 0
 */
int main(int argc, char *argv[])
{
    char content[1024];
    FILE *file;
    stack_t *stack = NULL;
    unsigned int count = 0;

    if (argc != 2)
    {
        fprintf(stderr, "USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }
    file = fopen(argv[1], "r");
    bus.file = file;
    if (!file)
    {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    while (fgets(content, sizeof(content), file) != NULL)
    {
        count++;
        bus.content = content;
        execute(content, &stack, count, file);
    }
    free_stack(stack);
    fclose(file);
    return (0);
}
