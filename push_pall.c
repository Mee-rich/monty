#include "main.h"

/**
 * push_function - adds nodes to the end of stack
 * @head: pointer to the head of stack
 * @line_count: count lines
 * Return: nothing (void)
 */
void push_function(stack_t **head, unsigned int line_count)
{
	int c;
	int idx = 0, f_flag = 0;

	if (func.arg)
	{
		if (func.arg[0] == '-')
			idx++;
		for (; func.arg[idx] != '\0'; idx++)
		{
			if (func.arg[idx] > 57 || func.arg[idx] < 48)
				f_flag = 1;
		}
		if (f_flag == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_count);
			fclose(func.file);
			free(func.content);
			free_function(*head);
			exit(EXIT_FAILURE);}}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_count);
		fclose(func.file);
		free(func.content);
		free_function(*head);
		exit(EXIT_FAILURE);
	}
	c = atoi(func.arg);
	if (func.f1 == 0)
		new_node(head, c);
	else
		add_queue(head, c);
}


/**
 * pall_function - print the values in a stack
 * starting from the top of the stack
 * @head: pointer to head pointer
 * @line_count: line count
 * Return: nothing (void)
 */
void pall_function(stack_t **head, unsigned int line_count)
{
	stack_t *ptr;
	(void)line_count;

	ptr = *head;
	if (ptr == NULL)
		return;
	while (ptr)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
}
