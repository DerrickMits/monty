#include "monty.h"

/**
 * free_stack - frees a doubly linked list
 * @head: the head of stack
 */
void free_stack(stack_t *head)
{
stack_t *current, *next;
current = head;
while (current != NULL)
{
next = current->next;
free(current);
current = next;
}
}
