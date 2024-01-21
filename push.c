#include "monty.h"

/**
 * f_push - adds node to the stack
 * @head: stack head
 * @counter: The line_number
 * Return: Nothing
 */
void f_push(stack_t **head, unsigned int counter)
{
char *arg = bus.arg;
if (!arg || !is_numeric(arg))
{
fprintf(stderr, "L%u: usage: push integer\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
addnode(head, atoi(arg));
}
