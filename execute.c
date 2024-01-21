#include "monty.h"

/**
 * execute - executes the opcode
 * @content: line content
 * @stack: head linked list - stack
 * @counter: the line counter
 * @file: pointer to the monty file
 * Return: 0 on success, -1 on failure
 */
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
char *opcode, *argument;
instruction_t *instruction;
if (content == NULL)
return (-1);
opcode = strtok(content, " \t\n");
if (opcode == NULL || *opcode == '#')
return (0);
argument = strtok(NULL, " \t\n");
instruction = get_instruction(opcode);
if (instruction == NULL || (argument != NULL && strcmp(opcode, "push") != 0))
{
fprintf(stderr, "L%u: unknown instruction %s\n", counter, opcode);
fclose(file);
free(content);
free_stack(*stack);
exit(EXIT_FAILURE);
}
if (strcmp(opcode, "push") == 0)
{
if (argument == NULL || !is_valid_argument(argument))
{
printf(stderr, "L%u: usage: push integer\n", counter);
fclose(file);
free(content);
free_stack(*stack);
exit(EXIT_FAILURE);
}
instruction->f(stack, atoi(argument));
}
else
{
instruction->f(stack, counter);
}
return (0);
}

