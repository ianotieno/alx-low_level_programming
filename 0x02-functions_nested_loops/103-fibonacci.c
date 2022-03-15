#include <stdio.h>
#include "main.c"

/**
 * main - prints fibonnaci numbers
 *
 * Description: prints from 1 to 4,000,000
 * Return: Always(0) Success
 */

int main(void)
{
	int num1, num2, i, n;
	int next_num;

	n = 4,000,000;

	for (i = 1; i <= n; i++)
	{
		if (i == 4,000,000)
		{
			printf("%d, ", num2);
		}
		else
		{
			printf("%d, ", num2);
			next_num = num1 + num2;
			num1 = num2;
			num2 = next_num;
		}
	}
	printf("\n");

	return (0);
}
