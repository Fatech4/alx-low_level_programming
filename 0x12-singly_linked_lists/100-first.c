#include <stdio.h>

void before_main(void) __attribute__((constructor));
/**
 * before_main - a function that execute before main
 * Return: void
 */
void before_main(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon");
	printf(" my back!\n");
}
