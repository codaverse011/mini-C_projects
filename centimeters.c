#include <stdio.h>

/**
 * Main - Conversion of Centimeters to Feet
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	double centimeters;

	printf("Enter value (cm): ");
	scanf("%lf", &centimeters);

	double feet = centimeters * 0.0328;

	printf("The equivalent feet value is: %.1lf feet\n", feet);
	return (0);
}
