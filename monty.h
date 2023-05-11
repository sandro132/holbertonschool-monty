#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct stack
{
        int n;
        struct stack *prev;
        struct stack *next;
} stack_t;


typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

int main (int argc, char **argv);
void push(stack_t **pila, unsigned int line);
void pall(stack_t **pila);

#endif 
