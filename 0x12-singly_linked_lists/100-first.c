/*
 * File: 100-first.c
 * Author: Dawa Edina Hillary
 */

#include <stdio.h>

void __attribute__ ((constructor)) first(void);

/**
 * first - prints a sentence before the
 **	main function is executed.
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
