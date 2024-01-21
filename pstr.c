#include "monty.h"

/**
 * f_pstr - prints the string starting at the top of the stack,
 * followed by a new line
 * @head: stack head
 * @counter: line_number
 * Return: Nothing
 */
void f_pstr(stack_t **head, unsigned int counter)
{
(void)counter;
stack_t *current = *head;
while (current != NULL && current->n != 0 && isascii(current->n))
{
printf("%c", current->n);
current = current->next;
}
printf("\n");
}

