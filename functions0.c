#include "monty.h"

/**
 * push - Adds a new node at the beginning of a stack_t list.
 * @stack: Double pointer to the first node of the list.
 * @line_number: Data value for the new node.
 *
 * Return: NULL on failure or address of the new element on success.
 */
void push(stack_t **stack, unsigned int line_number)
{
	char *number = NULL;
	int n;

	number = strtok(NULL, " \r\t\n");
	if (number == NULL)
	{
		dprintf(STDERR_FILENO, "L%u: usage: push integer\n", line_number);
		free(line);
		stack_freer(*stack);
		exit(EXIT_FAILURE);
	}
	if (!strcmp(number, "0") || !strcmp(number, "-0"))
		n = 0;
	else
	{
		n = atoi(number);
		if (n == 0 || an_alpha(number))
		{
			dprintf(STDERR_FILENO, "L%u: usage: push integer\n", line_number);
			free(line);
			stack_freer(*stack);
			exit(EXIT_FAILURE);
		}
	}
	stack_t *new_node = NULL;
	if (stack == NULL)
		return;
	new_node = (stack_t *)malloc(sizeof(stack_t));
	if (new_node == NULL)
		return;
	new_node->n = n;
	new_node->prev = NULL;
	if (*stack == NULL)
		new_node->next = NULL;
	if (*stack)
	{
		new_node->next = *stack;
		(*stack)->prev = new_node;
	}
	*stack = new_node;
	return;
}

void pall(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	stack_t *i = NULL;

	if (stack == NULL)
		return;
	
	if (*stack == NULL)
		return;

	for (i = *stack; i != NULL; i = i->next)
		printf("%d\n", i->n);
}

void pint(stack_t **stack, unsigned int line_number)
{
	if(stack == NULL || *stack == NULL)
	{
		dprintf(STDERR_FILENO, "L%u: can't pint, stack empty\n", line_number);
		free(line);
		stack_freer(*stack);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stack)->n);
}
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp_node = NULL;
	if(stack == NULL || *stack == NULL)
	{
		dprintf(STDERR_FILENO, "L%u: can't pop an empty stack\n", line_number);
		free(line);
		stack_freer(*stack);
		exit(EXIT_FAILURE);
	}
	temp_node = *stack;
	*stack = (*stack)->next;
	if(*stack != NULL)
	(*stack)->prev = NULL;

	free(temp_node);
}
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *temp_node = NULL;
	if(stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
	    dprintf(STDERR_FILENO, "L%u: can't swap, stack too short\n", line_number);
		free(line);
		stack_freer(*stack);
		exit(EXIT_FAILURE);	
	}
	temp_node = (*stack) ->next;

	(*stack)->next = temp_node->next;
	(*stack)->prev = temp_node;
	temp_node->next = (*stack);
	temp_node->prev = NULL;
	*stack = temp_node;

}
void add(stack_t **stack, unsigned int line_number)
{
	int ans;
    if(stack == NULL || *stack == NULL || (*stack)->next == NULL)
    {
	    dprintf(STDERR_FILENO, "L%u: can't add, stack too short\n", line_number);
		free(line);
		stack_freer(*stack);
		exit(EXIT_FAILURE);	
	}
	ans = (*stack) ->next->n + (*stack) ->n;
	(*stack) ->next->n = ans;
	pop (stack, line_number);
}

void nop(stack_t **stack, unsigned int line_number)
{
  (void)stack, (void)line_number;
}
