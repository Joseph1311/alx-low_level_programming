#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("The size of a char: %lu byte(s)", sizeof(char));
	printf("The size of an int: %lu byte(s)", sizeof(int));
	printf("The size of a long int: %lu byte(s)", sizeof(lont int));
	printf("The size of a long long int: %lu byte(s)", sizeof(long long int));
	printf("The size of a float: %lu byte(s)", sizeof(float));
	return (0);
}
