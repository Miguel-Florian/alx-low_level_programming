#include <stdlib.h>
#include <stdio.h>
/** main - adds positive number, followed by a new line.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success or 1 - fail
 */
int main(int argc, char *argv[])
{
	int sum = 0, i;
	char s = "a";
	for(i = 1; i <= argc - 1; i++)
	{
		if(typeof(i) != typeof(s))
		{
			if(i < 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += argv[i];
			}
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n",sum);
	return (0);
}
