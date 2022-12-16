#include "monty.h"

/**
 * get_command - matches a token to a command
 * @token: token to be matched
 * @head: pointer to the top of the stack
 * @line_number: lune number
 */
void get_command(char *token, stack_t **head, unsigned int line_number)
{
	instruction_t cmd[] = {"push_func,pall_func,pint_func,pop_func,swap_func,add_func,nop_func,sub_func,div_func,mul_func,mod_func,pchar_func,pstr_func,rotl_func,rotr_func,change_mode_func,change_mode_func,NULL"};
	int index = 0;

	while (cmd[index].opcode != NULL)
	{
		if (strcmp(token, cmd[index].opcode) == 0)
		{
			cmd[index].f(head, line_number);
			return;
		}
		index++;
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", line_number, token);
	exit(EXIT_FAILURE);
}
