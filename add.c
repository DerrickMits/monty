#include "monty.h"

/**
 * f_add - adds the top two elements of the stack.
 * @head: The stack head
 * @counter: the line number
 * Return: Nothing
 */
void f_add(stack_t **head, unsigned int counter)
{
if (*head == NULL || (*head)->next == NULL)
{
fprintf(stderr, "L%u: can't add, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
(*head)->next->n += (*head)->n;
f_pop(head, counter);
}
