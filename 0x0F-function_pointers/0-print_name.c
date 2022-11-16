#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - A function that prints a name
 * @name: Name parameter
 * @f: POinter to Function
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
