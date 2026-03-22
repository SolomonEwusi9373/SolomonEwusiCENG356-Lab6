/*
 ============================================================================
 Name        : main.c
 Author      : Austin Tian
 Revised by  : Solomon Ewusi | Student ID: N01659373
 Version     :
 Copyright   : Copyright 2023
 Description : Main entry point for the CENG 356 computer system simulation.
               For Lab 6, this file calls setup_memory() to launch the
               interactive memory controller interface.
 ============================================================================
 */

#include "header.h"  // include definitions and function declarations

int main (int argc, char *argv[]) {

        // ---------------------------------------------------------------
        // Lab 1-5 code (commented out - do not touch until told so in Lab 7)
        // This block handles ASM file parsing for future labs.
       /*
	    char *mem = NULL;  //  memory space pointer.
        FILE *fp = NULL;
        int stopChar;
	    // Step 1: Parse the ASM code.
		if (argc < 2) {
            puts("\nIncorrect number of arguments.");
            puts("Usage: ProgramName.exe MIPSCode.asm \n");
            stopChar = getchar();
            return EXIT_FAILURE;  // if the file cannot be found, then return.
        }
        if ((fp = fopen(argv[1], "r"))== NULL) {  // read the asm file.
                printf("Input file could not be opened.");
                stopChar = getchar();
                return EXIT_FAILURE;  // if the file cannot be read, then return.
        }
        parse_MIPS(fp);  // call this function to parse the code into
                        // Data_storage, Instruction_Storage and labelTab
        */

        // ---------------------------------------------------------------
        // Step 2: Setup the memory (Lab 6)
        // Launches the interactive memory menu for read/write/dump operations.
        // IMPORTANT: Remove this line for Lab 7 and later.
        setup_memory();

        // include memory.c in the project from Lab 6 onward to use memory functions.

        /* ---------------------------------------------------------------
           The following steps are for Lab 7 and later - do not uncomment yet.
           IMPORTANT: When initializing memory in Lab 7+, fill with 0
           instead of random numbers. */

        // mem = init_memory();  // allocate and initialize memory for the CPU
        // stopChar = getchar();

        // Step 3: Load the ASM code into memory (Lab 7)
        // puts("----Lab 7 Code Starts to Parse the ASM Code----");
        // loadCodeToMem(mem);
        // stopChar = getchar();

        // puts("----Lab 8 Code Starts to Fetch and Decode the Code ----");

        // Step 4: CPU fetches the machine code from memory (Lab 8)
        // Step 5: CPU decodes the fetched machine code (Lab 8)

        // puts("----Lab 9 Code Starts to Execute the Code ----");

        // Step 6: Execute instructions until program finishes (Lab 9)
        // CPU(mem);  // start the CPU execution loop - needed in Lab 8 and later
        // stopChar = getchar();

        // free_memory(mem);  // release allocated memory - used in Lab 7 and later
}
