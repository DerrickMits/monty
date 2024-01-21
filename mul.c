#include "monty.h"

/**
 * f_mul - multiplies the top two elements of the stack.
 * @head: stack head
 * @counter: the line_number
 * Return: Nothing
 */
void f_mul(stack_t **head, unsigned int counter)
{
if (*head == NULL || (*head)->next == NULL)
{
fprintf(stderr, "L%u: can't mul, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
(*head)->next->n *= (*head)->n;
pop(head, counter);
}
