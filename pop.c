#include "monty.h"

/**
 * pop - Removes the top element of the stack
 * @stack: Double pointer to the head of the stack
 * @line_number: Line number in the file
 *
 * Return: void
 */
void pop(stack_t **stack, unsigned int line_number)
{

	stack_t *temp;
	(void)line_number;
	
	if (!stack || !*stack)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	
	temp = *stack;
	*stack = (*stack)->next;
	
	if (*stack)
		(*stack)->prev = NULL;
	
	free(temp);
}