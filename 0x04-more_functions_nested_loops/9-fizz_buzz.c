#include <stdio.h>

/**
 * main - program that prints the numbers from 1 to 100
 * But for multiples of three print Fizz
 * and for the multiples of five print Buzz
 * Return: 0.
 */
int main(void)
{
	int i;

	i = 1;
	printf("%d", i);
	for (i = 2; i <= 100; ++i)
	{
		printf(" ");
		if (i % 3 == 0 || i % 5 == 0)
		{
			if (i % 3 == 0)
				printf("Fizz");
			if (i % 5 == 0)
				printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
	}
	printf("\n");
	return (0);
}
