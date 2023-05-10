#include "monty.h"

/**
 * main - entry point for the program
 * @argc: argument count
 * @argv: array of arguments
 * Returns: EXIT_SUCCESS if successful, EXIT_FAIL otherwise
 */
 int main(int argc, char **argv)
{
    FILE *fp;

    if (argc != 2)
    {
        fprintf(stderr, "USAGE: monty file");
        exit(EXIT_FAILURE);
    }

    if ((fp = fopen(argv[1], "r")) == -1)
    {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
}