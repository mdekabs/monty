/*
 * file: error_2.c
 * auth: Mdstorms
 */

#include "monty.h"

int short_stack_error(unsigned int line_number, char *op);
int div_error(unsigned int line_number);
int pop_error(unsigned int line_number);
int div_error(unsigned int line_number);
int pchar_error(unsigned int line_number, char *message);

/**
 * pop_error - prints pop error messages for empty stacks
 * @line_number: line number in script where error occured
 *
 * return: (EXIT_FAILURE) always
 */
int pop_error(unsigned int line_number)
{
	fprintf(stderr, "L%u; can't pop an empty stack\n", line_number);
	return (EXIT_FAILURE);
}

/**
 * pint_error - prints pint error messages for empty stacks.
 * @line_number: line number in monty file
 *
 * return: (EXIT_FAILURE) always
 */
int pint_error(unsigned int line_number)
{
	fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
	return (EXIT_FAILURE);
}
/**
 * short_stack_error - print monty math functionerror messages
 *
 * @line_number: line number in monty file
 * @op: operation where the error occured.
 *
 * return: (EXIT_FAILURE) always
 */
int short_stack_error(unsigned int line_number, char *op)
{
	fprintf(stderr, "L%u: can't %s, stack too short\n", line_number, op);
	return (EXIT_FAILURE);
}
/**
 * div_error - prints division error messages for division 
 * @line_number: line in monty
 *
 * return: (EXIT_FAILURE) always
 */
int div_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: division by zero\n", line_number);
	return (EXIT_FAILURE);
}

/**
 * pchar_error - prints pchar error message
 *
 * @line_number: line number in monty file
 * @message: the corresponding error message to print
 * return: (EXIT_FAILURE) always
 */
int pchar_error(unsigned int line_number, char *message)
{
	fprintf(stderr, "L%u: can't pchar, %s\n", line_number, message);
	return (EXIT_FAILURE);
}
