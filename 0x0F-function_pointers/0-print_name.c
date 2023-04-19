#include "function_pointers.h"
/**
 * print_name - print a name
 * @name: pointer to string
 * @f: pointer to function
 *
 * Return: string
 */
void print_name(char *name, void (*f)(char *))
{
	if(name == NULL && f == NULL)
	{
		f(name);
	}
}
