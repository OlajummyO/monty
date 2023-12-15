#include "monty.h"

/**
 * execute - Executes the Monty bytecode
 * @line: Line to be executed
 *
 * Return: void
 */
void execute(char *line)
{
	if (line[0] == '#')
		return;

	/* Execute other operations for non-comment lines */
	printf("Executing: %s\n", line);
}
