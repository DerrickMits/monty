#include "monty.h"

/**
 * f_queue - prints the top
 * @head: the head of the stack
 * @counter: The line
 * Return: no return
 */
void f_queue(stack_t **head, unsigned int counter)
{
if (*head == NULL)
{
fprintf(stderr, "L%u: can't queue, stack empty\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
printf("%d\n", (*head)->n);
}

/**
 * addqueue - adds node to the tail stack
 * @n: the new value
 * @head: stack head
 * Return: nothing
 */
void addqueue(stack_t **head, int n)
{
stack_t *new_node, *temp;
new_node = malloc(sizeof(stack_t));
if (!new_node)
{
fprintf(stderr, "Error: malloc failed\n");
exit(EXIT_FAILURE);
}
new_node->n = n;
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
return;
}
temp = *head;
while (temp->next != NULL)
{
temp = temp->next;

temp->next = new_node;
}
