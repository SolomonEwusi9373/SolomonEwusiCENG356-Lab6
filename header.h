/*
 ============================================================================
 Name        : header.h
 Author      : Austin Tian
 Revised by  : Solomon Ewusi | Student ID: N01659373
 Version     :
 Copyright   : Copyright 2023
 Description : Header file for CENG 356 Lab 6 - Memory Systems.
               Contains macro definitions for memory size constants and
               the function declaration for the memory controller.
 ============================================================================
 */

#ifndef HEADER_H   // include guard - prevents this file from being included twice
#define HEADER_H

#include <string.h>  // standard string operations
#include <stdio.h>   // standard input/output (printf, scanf, puts, etc.)
#include <stdlib.h>  // standard library (malloc, free, rand, exit, etc.)

// Function declaration for the memory controller interface (defined in memory.c)
void setup_memory();

// Memory size constants
#define MEM_SIZE 1024*1024   // total memory size: 1 Megabyte (1,048,576 bytes)
#define MIN_DUMP_SIZE  256   // minimum number of bytes allowed in a memory dump
#define DUMP_LINE 16         // number of bytes displayed per row in the memory dump

#endif /* HEADER_H */  // end of include guard
