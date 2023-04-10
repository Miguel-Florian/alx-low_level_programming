#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints coints left
 * @args: Paramater Entry
 * @argv: one number of argumets
 * Return: zero onone number of argumetsr
 */
int main(int args, char *argv[])
{
	int C, coins = 0;

	if (args != 2)
	{
		printf("Error\n");
		return (1);
	}
	C = atoi(argv[1]);
	if (c < 0)
	{
		printf("0\n");
		return (0);
	}
	for (; C >= 0;)
	{
		if (c >= 25)
			c -= 25;
		else if (c >= 10)
			C -= 10;
		else if (c >= 5)
			C -= 5;
		else if (c >= 2)
			C -= 2;
		else if (c >= 1)
			c -= 1;
		else
			break;
		coins += 1;
	}
	printf("%d\n", coins)
		return (0);
}

