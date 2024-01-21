#include "monty.h"

/**
 * f_sub - subtraction
 * @head: The head of the stack
 * @counter: Line number
 * Return: Nothing
 */
void f_sub(stack_t **head, unsigned int counter)
{
if (*head == NULL || (*head)->next == NULL)
{
fprintf(stderr, "L%u: can't sub, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
(*head)->next->n -= (*head)->n;
pop(head, counter);
}
