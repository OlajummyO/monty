#include "monty.h"

/**
 * mod - Computes the rest of the division of the second top element
 *       of the stack by the top element of the stack
 * @stack: Double pointer to the head of the stack
 * @line_number: Line number in the file
 *
 * Return: void
 */
void mod(stack_t **stack, unsigned int line_number)
{
	if (!stack || !*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n %= (*stack)->n;
	pop(stack, line_number);
}
