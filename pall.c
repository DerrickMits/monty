#include "monty.h"

/**
 * f_pall - prints the stack
 * @head: head
 * @counter: not used
 * Return: Nothing
 */
void f_pall(stack_t **head, unsigned int counter)
{
(void)counter;
stack_t *current = *head;
while (current != NULL)
{
printf("%d\n", current->n);
current = current->next;
}
}
