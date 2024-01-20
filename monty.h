#ifndef _GNU_SOURCE
#define _GNU_SOURCE
#endif

#ifndef MONTY_H
#define MONTY_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <fct1.h>
#include <ctypes.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous elements of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	sruct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stcak, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct func_t - structure including arguments, contents of file
 * file and flag
 * @arg: value
 * @file: monty file
 * @content: file content
 * @f1: file flag
 * Description: carries value for each monty function
 */
typedef struct func_t
{
	FILE *file;
	char *arg;
	int f1;
	char *content;
} funct_t;

/*task 0*/
void push_function(stack_t **head, unsigned int line_count);
void pall_function(stack_t **head, unsigned int line_count);

/*task 1*/
void monty_pint(stack_t **head, unsigned int line_counter);

/*task 2*/
void monty_pop(stack_t **head, unsigned int line_counter);

/*task 3*/
void monty_swap(stack_t **head, unsigned int line_counter);

/*task 4*/
void monty_add(stack_t **head, unsigned int line_counter);

/*task 5*/
void monty_nop(stack_t **head, unsigned int line_counter);

/*task 6*/
void monty_sub(stack_t **head, unsigned int line_counter);

/*task 7*/
void monty_div(stack_t **head, unsigned int line_counter);

/*task 8*/
void monty_mul(stack_t **head, unsigned int line_counter);

/*task 9*/
void monty_mod(stack_t **head, unsigned int line_count);

/*task 11*/
void monty_pchar(stack_t **head, unsigned int line_count);

/*task 12*/
void monty_pstr(stack_t **head, unsigned int line_count);

/*task 13*/
void monty_rotl(stack_t **head, __attribute__((unused)) unsigned int count);

/*task 14*/
void monty_rotr(stack_t **head, __attribute__((unused)) unsignrd int cpount);

/*task 15*/
void monty_queue(stack_t **head, unsigned int line_count);
void monty_stack(stack_t **head, unsigned int line_count);

void add_queue(stack_t **head, int new);

/* free stack*/
void free_function(stack_t *head);
void new_node(stack_t **head, int new);

/*opcodes execution*/
int exec(char *content, stack_t **stack, unsigned int line_counter, FILE *file);

#endif
