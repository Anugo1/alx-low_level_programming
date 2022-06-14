#include "main.h"

/**
 * swap_int - Swaps the inputs.
 *
 * @a: int a
 * @b: int b
 *
 * Return: Always 0
*/
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
