#include "monty.h"

/**
 * monty_pint - prints the top of stack followed by a new line
 * @head: pointer to the pointer in the stack
 * @line_counter: line count
 * Return: nothing
 */
void monty_pint(stack_t **head, unsigned int line_counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_counter);
		fclose(func.filr);
		free(func.content);
		free_function(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
