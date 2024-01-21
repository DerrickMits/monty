#include "monty.h"

/**
 * addnode - adds a new node to the stack
 * @head: pointer to the stack head
 * @n: value to be added to the new node
 * Return: pointer to the new node
 */
stack_t *addnode(stack_t **head, int n)
{
stack_t *new_node = malloc(sizeof(stack_t));
if (!new_node)
{
fprintf(stderr, "Error: malloc failed\n");
exit(EXIT_FAILURE);
}
new_node->n = n;
new_node->prev = NULL;
new_node->next = NULL;
if (*head)
{
new_node->next = *head;
(*head)->prev = new_node;
}
*head = new_node;
return (new_node);
}
