#include "main.h"
/**
 * _islower - Check for lowercase character
 * @c: The character to be checked
 * Return: 1 for lowercase character
 */
int _islower(int c)
{
	if((c >= 97) && c <= 112)
	{
	return (1);
	}
	return (0);
}
