#include <stdio.h>
#include "lists.h"

/**
* print_pre_main_message - prints a specific str before the main is executed
*/

void print_pre_main_message(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}

/*
* __attribute__((constructor)) is a GCC-specific attribute that specifies
* the before_main function should be executed before the main function.
* before_main - causes a function to be executed before the main function
*/

__attribute__((constructor))
void before_main(void)
{
print_pre_main_message();
}

