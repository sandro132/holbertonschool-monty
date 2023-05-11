#include "monty.h"

/**
 * push - Insert a new entry into the table with the given name and value
 *
 * @stack: The stack pointer
 * @n: Number of entries in the table
 *
 * Return: 0 if successful and -1 otherwise
 */
void push(stack_t **pila, unsigned int line)
{
	stack_t *nodo = malloc(sizeof(stack_t));

	if (nodo == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	nodo->n = line;
	nodo->prev = NULL;
	nodo->next = *pila;
	if (*pila != NULL)
		(*pila)->prev = nodo;
	*pila = nodo;
}