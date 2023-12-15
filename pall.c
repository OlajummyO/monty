#include "monty.h"

/**
 * push - Pushes an element onto the stack
 * @stack: Double pointer to the head of the stack
 * @line_number: Line number in the file
 * @value: Value to push onto the stack
 *
 * Description: The opcode push pushes an element onto the stack.
 * If the stack does not exist, it is created and initialized as a new stack.
 * If malloc fails, it prints an error message and exits with EXIT_FAILURE.
 *
 * Return: void
 */
void push(stack_t **stack, unsigned int line_number, char *value)
{
	int num;
	stack_t *new_node;

	if (!value || !*value)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	num = atoi(value);
	
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = num;
	new_node->prev = NULL;
	new_node->next = *stack;

	if (*stack != NULL)
		(*stack)->prev = new_node;

	*stack = new_node;
}

/**
 * pall - Prints all the values on the stack
 * @stack: Double pointer to the head of the stack
 * @line_number: Line number in the file
 *
 * Description: The opcode pall prints all the values on the stack.
 * It starts from the top of the stack and prints each element's value.
 * If the stack is empty, it doesn't print anything.
 *
 * Return: void
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		(void)line_number;
	}
}
