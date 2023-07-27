#include <stdio.h>
#include "lists.h"
/**
 * File: 100-first.c
 * Author: Dawa Edina Hillary
 */

void first(void) __attribute__ ((constructor));

/**
 * first - prints a sentence before the main
 * 	main function is executed
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
