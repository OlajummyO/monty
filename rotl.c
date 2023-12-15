#include "monty.h"

/**
 * rotl - Rotates the stack to the top
 * @stack: Double pointer to the head of the stack
 * @line_number: Line number in the file
 *
 * Return: void
 */
void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	(void)line_number;

	if (*stack == NULL || (*stack)->next == NULL)
		return;

	*stack = (*stack)->next;
	(*stack)->prev = NULL;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = (*stack)->prev;
	(*stack)->prev = temp;
	temp->next->prev = NULL;
}
