#include "monty.h"

Monty monty;/* Define the monty variable */

/**
 * stack - sets the format of the data to a stack (LIFO)
 * @stack: Double pointer to the head of the stack
 * @line_number: Line number in the file
 *
 * Return: void
 */
void stack(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;

	monty.mode = 0;
}

/**
 * queue - sets the format of the data to a queue (FIFO)
 * @stack: Double pointer to the head of the stack
 * @line_number: Line number in the file
 *
 * Return: void
 */
void queue(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;

	monty.mode = 1;
}
