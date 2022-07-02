#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - User defined while loop, inputs, calculated sum and average
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i = 0;
	int num;
	int total_num;
	int sum = 0;
	int average;

	printf("How many entries: ");
	scanf("%d", &total_num);

	while (i < total_num)
	{
		printf("Enter number %d: ", i + 1);
		scanf("%d", &num);
		sum = sum + num;
		i++;
	}
	printf("\nTotal sum: %d", sum);
	printf("\nAverage: %d", sum / total_num);
}
