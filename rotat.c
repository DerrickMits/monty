#include "monty.h"

/**
 * f_rotr - rotates the stack to the bottom
 * @head: stack head
 * @counter: line number
 * Return: Nothing
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
if (*head == NULL || (*head)->next == NULL)
return;
stack_t *last = *head;
stack_t *secondLast = NULL;
while (last->next != NULL)
{
secondLast = last;
last = last->next;
}
secondLast->next = NULL;
last->prev = NULL;
last->next = *head;
(*head)->prev = last;
*head = last;
}
