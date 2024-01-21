#include "monty.h"

/**
 * monty_swap - swaps the top two elements of the stack
 * @head: head of stack
 * @line_counter: line count
 * Return: nothing (void)
 */
void monty_swap (stack_t **head, unsigned int line_counter)
{
	stack_t *ptr;
	int tmp;
	int line_cnt = 0;

	ptr = *head;
	while (ptr)
	{
		ptr = ptr->next;
		line_cnt++;
	}
	if (line_cnt < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_counter);
		fclose(func.file);
		free(func.content);
		free_function(*head);
		exit(EXIT_FAILURE);
	}
	ptr = *head;
	tmp = ptr->n;
	ptr->n = ptr->next->n;
	ptr->next->n = tmp;
}
