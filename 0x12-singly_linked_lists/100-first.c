#include <stdio.h>
#include "lists.h"

/**
* print_pre_main_message - function that prints a specific before the main is executed
*/

void print_pre_main_message(void) 
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}

/*
* __attribute__((constructor)) is a GCC-specific attribute that specifies that 
* the before_main function should be executed before the main function.
*/

__attribute__((constructor))
void before_main(void) 
{
print_pre_main_message();
}

