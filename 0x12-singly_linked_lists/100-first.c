#include "lists.h"
#include <stdio.h>
/**
 * exeB - executes before main
 * Return: Nothing
 */
void exeB(void) __attribute__((constructor));
void exeB(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
