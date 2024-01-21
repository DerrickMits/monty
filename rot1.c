#include "monty.h"

/**
 * f_rotl - rotates the stack to the top.
 * @head: Head of the stack
 * @counter: line number
 * Return: Nothing
*/
void f_rotl(stack_t **head, __attribute__((unused)) unsigned int counter)
{
stack_t *temp, *last;
if (*head == NULL || (*head)->next == NULL)
return;
temp = *head;
last = *head;
while (last->next != NULL)
last = last->next;
*head = temp->next;
(*head)->prev = NULL;
temp->next = NULL;
temp->prev = last;
last->next = temp;
}
