#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the multiple of two numbers, followed by a new line.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int m = 1, i;
	for(i = 1; i <= argc - 1; i++)
	{
		m *= argv[i];
	}
	printf("%d", m);
	return (0);
}	
