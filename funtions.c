#include "monty.h"

int r_string(FILE *fp, stack_t **pila)
{
    char *str = NULL;
    size_t n = 0;
    ssize_t len;
    unsigned int line = 1;
    char *tok;

    while ((len = getline(&str, &n, fp)) != -1)
    {
        tok = strtok(str, " \t\n");
        if (tok != NULL)
        {
            if (strcmp(tok, "push") == 0)
            {
                tok = strtok(NULL, " \t\n");
                if (tok != 0)
                {
                    if (isalpha(*tok) == 0)
                    {
                        atoi(tok);
                        push(pila, line);
                    }
                }
            }

            if (strcmp(tok, "pall") == 0)
            {
                pall(pila);
            }
        }
    }
}
                {
                    fprintf(stderr, "L%d: usage: push integer\n", line);
                    exit(EXIT_FAILURE);
                }