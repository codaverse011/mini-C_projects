#include <stdio.h>

/**
 * main - Area of a rectangle
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int len;
	int brd;

	printf("Enter length (cm): ");
	scanf("%d", &len);
	printf("Enter breadth (cm): ");
	scanf("%d", &brd);

	int area = len * brd;

	printf("The area of the reactangle with %d and %d cm is: %d", len, brd, area);
	return (0);
}
