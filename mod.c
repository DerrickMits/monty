#include "monty.h"

/**
 * f_mod - computes the rest of the division of the second
 * top element of the stack by the top element of the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
 */
void f_mod(stack_t **head, unsigned int counter)
{
if (*head == NULL || (*head)->next == NULL)
{
fprintf(stderr, "L%u: can't mod, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
if ((*head)->n == 0)
{
fprintf(stderr, "L%u: division by zero\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
(*head)->next->n %= (*head)->n;
pop(head, counter);
}
