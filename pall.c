#include "monty.h"

/**
 * pall - print a list of entries in the table
 *
 * @stack: Pointer to the stack structures
 *
 * Returns: a list of entries in the table.
 */
void pall(stack_t **pila)
{
	while (pila != NULL)
	{
		printf("%d\n", pila->n);
		pila = pila->next;
	}
}