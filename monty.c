#include "monty.h"

int main(int argc, char **argv)
{
    FILE *fp;
    

    if (argc != 2)
    {

        fprintf(stderr, "USAGE: monty file");
        exit (EXIT_FAILURE);
    }
      
   fp = fopen(argv[1], "r");
   if(fp == NULL)
   {

       fprintf(stderr, "Error: Can't open file %s", argv[1]);
       exit (EXIT_FAILURE);
   }
   
    
    return (fp);
   
   
}

    